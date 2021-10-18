#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define clr(a) memset(a,0,sizeof(a))
#define reset(a) memset(a,-1,sizeof(a))
#define mod 1000000007
#define pi acos(-1)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};

const int MAXN = 15;

vector<pair<int,int> > vec[10005];
int dis[10005],level[10005];
int LCA[10005][MAXN+1];

void dfs(int node,int d,int lvl,int par){
    level[node] = lvl;
    dis[node] = d;
    LCA[node][0] = par;

    for(auto p : vec[node]){
        int b = p.first , w = p.second;
        if(b != par){
            dfs(b,d+w,lvl+1,node);
        }
    }

}

void init(int n){
    dfs(1,0,0,-1);

    for(int j=1; j<=MAXN; j++){
        for(int i=1; i<=n; i++){
            if(LCA[i][j-1] != -1){
                int par = LCA[i][j-1];
                LCA[i][j] = LCA[par][j-1];
            }
        }
    }
}

int getLCA(int a,int b){
    if(level[b] < level[a])swap(a,b);
    int d = level[b] - level[a];
    while(d > 0){
        int i = log2(d);
        b = LCA[b][i];
        d -= (1<<i);
    }

    if(a == b)return a;

    for(int i=MAXN; i>=0; i--){
        if(LCA[a][i] != -1 && (LCA[a][i] != LCA[b][i])){
            a = LCA[a][i] , b = LCA[b][i];
        }
    }

    return LCA[a][0];
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    fastio
    
    int t;
    cin>>t;
    cout << "\n";

    while(t--){
        for(int i=0; i<10005; i++){
            vec[i].clear();
            dis[i] = 0;
            level[i] = 0;
        }
        reset(LCA);

        int n,a,b,c,w;
        cin>>n;
        for(int i=1; i<n; i++){
            cin>>a>>b>>w;
            vec[a].pb({b,w});
            vec[b].pb({a,w});
        }

        init(n);

        string str;
        while(cin>>str){
            
            if(str == "DONE")break;
            else if(str == "DIST"){
                cin>>a>>b;
                int lca = getLCA(a,b);
                cout << dis[a] + dis[b] - (2*dis[lca]) << "\n";
            }
            else{
                cin>>a>>b>>c;
                c--;
                int lca = getLCA(a,b);
                int lvl_a = level[a] - level[lca];
                int lvl_b = level[b] - level[lca];
                if(c > lvl_a){
                    int diff = c - lvl_a;
                    int d = lvl_b - diff;
                    while(d > 0){
                        int i = log2(d);
                        b = LCA[b][i];
                        d -= (1<<i);
                    }
                    cout << b << "\n";
                }
                else{
                    int d = c;
                    while(d > 0){
                        int i = log2(d);
                        a = LCA[a][i];
                        d -= (1<<i);
                    }
                    cout << a << "\n";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}