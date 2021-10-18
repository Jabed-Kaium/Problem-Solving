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

void dfs(int v){
	visited[v] = true;
	for(int i = 0; i<adj[v].size(); i++){
        int u = adj[v][i];
		if(!visited[u]){
			dfs(u);
		}
	}
}


int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,e;
    int a,b;

    cin>>n>>e;
    int temp = e;

    while(temp--){
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    int cc_count = 0;   //number of connected components

    for(int i=1; i<=n; i++){
		if(visited[i] == 0){	//if the node is not visited
			dfs(i);
			cc_count++;
		}
	}

    if(cc_count == 1 && e == n-1){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}