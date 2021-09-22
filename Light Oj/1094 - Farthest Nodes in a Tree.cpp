/*
    Run BFS two times.
    First choose an arbitrary node (let's say 0) then calculate distance of all nodes from it.
    Then take out the farthest node (let's say u) from 0 & run BFS for that node.
    This time the farthest node from u holds maximum distance.
*/

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

vector< pair<int,int> > adj[30005];
bool visited[30005];
int dis[30005];
int maxLength = INT_MIN,maxNode = 0;

void bfs(int src){
    queue <int> q;
    visited[src] = 1;
    dis[src] = 0;
    q.push(src);

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int i=0; i<adj[curr].size(); i++){
            int u = adj[curr][i].first;
            if(!visited[u]){
                dis[u] = dis[curr] + adj[curr][i].second;
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

        for(int i=0; i<30005; i++){
            adj[i].clear();
        }

        int n,tmp,a,b,w;
        cin>>n;
        tmp = n-1;

        while(tmp--){
            cin>>a>>b>>w;
            adj[a].pb({b,w});
            adj[b].pb({a,w});
        }

        clr(visited);
        clr(dis);
        bfs(0);

        maxLength = INT_MIN;
        for(int i=0; i<n; i++){
            if(dis[i] > maxLength){
                maxLength = dis[i];
                maxNode = i;
            }
        }

        clr(visited);
        clr(dis);
        bfs(maxNode);

        maxLength = INT_MIN;
        for(int i=0; i<n; i++){
            if(dis[i] > maxLength){
                maxLength = dis[i];
            }
        }

        printf("Case %d: %d\n", tt,maxLength);
    }

    return 0;
}