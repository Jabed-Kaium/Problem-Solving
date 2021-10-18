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

const int MX = 10005;
set <int> ap;
vector<int> vec[MX];
int in[MX] , low[MX] , vis[MX];
int timer;
int n,m,a,b;

void dfs(int node , int par = -1){
    vis[node] = 1;
    in[node] = low[node] = timer++;
    int children = 0;
    for(int child : vec[node]){
        if(child == par)continue;
        if(vis[child]){
            low[node] = min(low[node] , in[child]);
        }
        else{
            dfs(child , node);
            low[node] = min(low[node] , low[child]);
            if(low[child] >= in[node] && par != -1){
                ap.insert(node);
            }
            ++children;
        }
    }
    if(par == -1 && children > 1){
        ap.insert(node);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fastio
    
    while(cin>>n>>m){
        if(n == 0 && m == 0)break;
        ap.clear();
        for(int i=0; i<MX; i++){
            vec[i].clear();
            vis[i]=0;
            in[i]=0;
            low[i]=0;
        }

        while(m--){
            cin>>a>>b;
            vec[a].pb(b);
            vec[b].pb(a);
        }

        dfs(1,-1);

        cout << ap.size() << "\n";
    }

    return 0;
}