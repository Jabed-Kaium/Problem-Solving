#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define clr(a) memset(a,0,sizeof(a))
#define mod 1000000007
#define pi acos(-1)

int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};

vector <int> adj[105];
bool visited[105];
int dis1[105];  //distance form source
int dis2[105];  //distrance from target
int source,target;

void bfs(int src , int *dis){
    queue <int> q;
    visited[src] = 1;
    dis[src] = 0;
    q.push(src);

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int i=0; i<adj[curr].size(); i++){
            int u = adj[curr][i];
            if(!visited[u]){
                dis[u] = dis[curr] + 1;
                visited[u] = 1;
                q.push(u);
            }
        }
    }
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

        for(int i=0; i<105; i++){
            adj[i].clear();
        }

        int n,m,a,b;
        cin>>n>>m;
        while(m--){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        cin>>source>>target;

        clr(dis1);
        clr(visited);
        bfs(source,dis1);

        clr(dis2);
        clr(visited);
        bfs(target,dis2);

        int ans = INT_MIN;

        for(int i=0; i<n; i++){
            ans = max(ans , dis1[i]+dis2[i]);
        }

        printf("Case %d: %d\n", tt,ans);
    }

    return 0;
}