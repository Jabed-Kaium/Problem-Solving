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

const int MX = 100005;
vector<int> vec[MX];
vector<pair<int,int> > egdeList;
int in[MX] , low[MX] , vis[MX];
int timer=0;
bool hasBridge = 0;

void dfs(int node, int par){
    vis[node] = 1;
    in[node] = low[node] = timer++;

    for(int child : vec[node]){
        if(child == par)continue;
        if(vis[child]){
            low[node] = min(low[node] , in[child]);
            if(in[node] > in[child]){
                egdeList.pb({node,child});
            }
        }
        else{
            dfs(child , node);
            if(low[child] > in[node]){
                hasBridge = 1;
                return;
            }
            else{
                egdeList.pb({node,child});
            }
            low[node] = min(low[node] , low[child]);
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fastio
    
    int n,m,a,b;
    cin>>n>>m;
    while(m--){
        cin>>a>>b;
        vec[a].pb(b);
        vec[b].pb(a);
    }

    dfs(1,-1);

    if(hasBridge){
        cout << "0\n";
    }
    else{
        for(auto p: egdeList){
            cout << p.first << " " << p.second << "\n";
        }
    }

    return 0;
}