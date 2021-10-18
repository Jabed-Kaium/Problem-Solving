#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

vector <int> adj[2005];
bool visited[2005];
bool col[2005];

bool dfs(int v,int c){
    visited[v] = true;  //mark the node as visited
    col[v] = c; //colour the node by c

    for(int i=0; i<adj[v].size(); i++){
        int child = adj[v][i];

        if(!visited[child]){
            if(dfs(child , c^1) == false){
                return false;
            }
        }
        else{
            if(col[v] == col[child]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    int n,m;

    cin>>t;

    for(int i=1; i<=t; i++){
        cin>>n>>m;

        memset(visited,0,sizeof(visited));
        memset(col,0,sizeof(col));
        for(int j=0; j<2005; j++){
            adj[j].clear();
        }

        int a,b;

        while(m--){
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }

        bool flag = true;

        for(int i=1; i<=n; i++){
            if(visited[i] == 0){
                if(dfs(i,1) == false){
                    flag = false;
                    break;
                }
            }
        }

        if(flag == true){
            printf("Scenario #%d:\n", i);
            printf("No suspicious bugs found!\n");
        }
        else{
            printf("Scenario #%d:\n", i);
            printf("Suspicious bugs found!\n");
        }
    }

    return 0;
}