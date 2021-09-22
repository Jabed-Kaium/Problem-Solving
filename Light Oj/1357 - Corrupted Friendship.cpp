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

int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};

vector <int> adj[100005];
bool visited[100005];
ll n,nodeVisited,notFrined;

void dfs(int node){
    visited[node] = 1;
    nodeVisited++;

    for(int i=0; i<adj[node].size(); i++){
        int child = adj[node][i];

        if(!visited[child]){
            dfs(child);
        }
    }

    notFrined += (n - nodeVisited);
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    for(int tt=1; tt<=t; tt++){
        for(int i=0; i<100005; i++){
            adj[i].clear();
            visited[i] = 0;
        }

        int a,b,invited;
        cin>>n;
        for(int j=1; j<n; j++){
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }

        nodeVisited = 0, notFrined = 0;
        invited = n-1;

        dfs(1);

        printf("Case %d: %d %lld\n", tt,invited,notFrined);

    }

    return 0;
}