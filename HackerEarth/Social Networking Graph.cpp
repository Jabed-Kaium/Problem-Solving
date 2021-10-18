#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

const int sz = 1000005;

vector<int> adj[sz];
int visited[sz] , dis[sz] , level[sz];

void bfs(int source){
    queue<int> q;
    q.push(source);
    visited[source] = 1;
    dis[source] = 0;

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int i=0; i<adj[curr].size(); i++){
            int child = adj[curr][i];
            if(!visited[child]){
                q.push(child);
                dis[child] = dis[curr] + 1;
                visited[child] = 1;
                level[dis[child]]++;
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
    
    int n,e,a,b;

    cin>>n>>e;
    while(e--){
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    int query;
    cin>>query;
    while(query--){
        for(int i=0; i<sz; i++){
            visited[i] = 0 , dis[i] = 0 , level[i] = 0;
        }
    
        cin>>a>>b;

        bfs(a);

        cout << level[b] << "\n";
    }

    return 0;
}