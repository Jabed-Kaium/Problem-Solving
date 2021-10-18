#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

vector <int> adj[10005];
bool visited[10005];
int dis[10005];

void bfs(int source){
    queue <int> q;
    q.push(source);
    visited[source] = true;
    dis[source] = 0;

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int i=0; i<adj[curr].size(); i++){
            int child = adj[curr][i];
            if(!visited[child]){
                q.push(child);
                dis[child] = dis[curr] + 1;
                visited[child] = true;
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

    while(t--){
        for(int i=0; i<10005; i++){
            adj[i].clear();
        }
        memset(visited,0,sizeof(visited));
        memset(dis,0,sizeof(dis));

        int n,m,a,b;
        cin>>n>>m;
        while(m--){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        bfs(1);

        cout << dis[n] << "\n";
    }

    return 0;
}