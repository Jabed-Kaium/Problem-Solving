#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void dfs(int v,bool visited[],vector <int> adj[]){
	visited[v] = true;
	for(int i=0; i<adj[v].size(); i++){
		int u = adj[v][i];
		if(!visited[u]){
			dfs(u,visited,adj);
		}
	}
}

int main()
{
	int n,e,x,y;
	
	cin>>n>>e;
	
	vector <int> adj[n+1];
	bool visited[n+1];
	
	memset(visited,0,sizeof(visited));
		
	while(e--){
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	
	int cc_count = 0;
	
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			dfs(i,visited,adj);
			cc_count++;
		}
	}
	
	cout << cc_count << "\n";
	
	return 0;
}
