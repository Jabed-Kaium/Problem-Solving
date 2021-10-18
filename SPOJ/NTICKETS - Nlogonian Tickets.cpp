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

const int MAXN = 22;
const int N = 100010;
pair<int,int> LCA[N][MAXN+1];
vector <pair<int,int> > vec[N];
int level[N];
int ans1,n;

void dfs(int node,int lvl,int val,int par){
    level[node] = lvl;
    LCA[node][0].ff = par;
    LCA[node][0].ss = val;

    for(auto p : vec[node]){
        int b = p.first , w = p.second;
        if(b != par){
            dfs(b,lvl+1,w,node);
        }
    }
}

void init(int n){
    dfs(1,0,-1,-1);

    for(int j=1; j<=MAXN; j++){
        for(int i=1; i<=n; i++){
            if(LCA[i][j-1].ff != -1){
                int par = LCA[i][j-1].ff;
                LCA[i][j].ff = LCA[par][j-1].ff;
            }
        }
    }

    for(int j=1; j<=MAXN; j++){
        for(int i=1; i<=n; i++){
            if(LCA[i][j-1].ff != -1){
                int par = LCA[i][j-1].ff;
                int parr = LCA[par][j-1].ff;
                if(parr != -1){
                    LCA[i][j].ss = max(LCA[i][j-1].ss,LCA[par][j-1].ss);
                }
            }
        }
    }
}

int getLCA(int a,int b){
    if(level[b] < level[a])swap(a,b);
    int d = level[b] - level[a];
    while(d > 0){
        int i = log2(d);
        ans1 = max(ans1,LCA[b][i].ss);
        b = LCA[b][i].ff;
        d -= (1<<i);
    }

    if(a == b)return ans1;

    for(int i= MAXN; i>=0; i--){
        if(LCA[a][i].ff != -1 && (LCA[a][i].ff != LCA[b][i].ff)){
            ans1 = max(ans1,max(LCA[a][i].ss,LCA[b][i].ss));
            a = LCA[a][i].ff , b =LCA[b][i].ff;
        }
    }

    return max(ans1,max(LCA[a][0].ss,LCA[b][0].ss));
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    fastio
    
    while(cin>>n){
        if(n == 0)break;

        for(int i=0; i<N; i++){
            vec[i].clear();
            level[i] = 0;
        }
        reset(LCA);

        int a,b,w;

        for(int i=1; i<n; i++){
            cin>>a>>b>>w;
            vec[a].pb({b,w});
            vec[b].pb({a,w});
        }

        init(n);

        int q;
        cin>>q;
        while(q--){
            ans1 = 0;
            cin>>a>>b;
            ans1 = getLCA(a,b);
            cout << ans1 << "\n";
        }
        cout << "\n";
    }

    return 0;
}