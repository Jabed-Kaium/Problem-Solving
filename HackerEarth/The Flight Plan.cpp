#include<bits/stdc++.h>
using namespace std;
#define pb push_back

// int dx[] = {-1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

vector <int> adj[1005];
int parent[1005];
bool visited[1005];
int n,m,t,c;

void bfs(int source,int target){
    queue <int> q;
    q.push(source);
    visited[source] = 1;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto i:adj[node]){
            if(!visited[i]){
                parent[i] = node , visited[i] = 1;
                if(i == target)return;
                q.push(i);
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
    
    int source,target;

    cin>>n>>m>>t>>c;

    if(n == 1){
        cout << "1\n1";
        return 0;
    }

    while(m--){
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    for(int i=1; i<=n; i++){
        sort(adj[i].begin(), adj[i].end());
    }

    cin>>source>>target;

    bfs(source,target);

    vector <int> ans;

    ans.pb(target);
    int cnt=1;
    int s = parent[target];

    while(s != source){
        ans.pb(s);
        cnt++;
        s = parent[s];
    }

    ans.pb(s);
    cnt++;

    cout << cnt << "\n";
    for(int i=ans.size()-1; i>=0; i--){
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}