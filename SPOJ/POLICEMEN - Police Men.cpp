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

vector<int> vec[10005];
int level[10005];
int LCA[10005][MAXN+1];

void dfs(int node,int lvl,int par){
    level[node] = lvl;
    LCA[node][0] = par;

    for(int child : vec[node]){
        if(child != par){
            dfs(child,lvl+1,node);
        }
    }
}

void init(int n){
    dfs(1,0,-1);

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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fastio
    
    int n,a,b,q;
    reset(LCA);
    cin>>n;
    for(int i=1; i<n; i++){
        cin>>a>>b;
        vec[a].pb(b);
        vec[b].pb(a);
    }

    init(n);

    cin>>q;
    while(q--){
        cin>>a>>b;
        int thief,police;
        int lca = getLCA(a,b);
        thief = level[a] - level[lca];
        police = level[b] - level[lca];
        if(thief < police){
            cout << "NO\n";
        }
        else{
            cout << "YES " << lca << "\n";
        }
    }

    return 0;
}