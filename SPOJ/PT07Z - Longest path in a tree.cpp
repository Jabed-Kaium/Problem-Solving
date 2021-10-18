#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

vector<int> adj[10005];
bool visited[10005];
int maxLength = INT_MIN,maxNode = 0;

void dfs(int v,int c){
	visited[v] = true;
    if(c > maxLength){  //if current length > previous length
        maxLength = c;
        maxNode = v;
    }
	for(int i=0; i<adj[v].size(); i++){
        int u = adj[v][i];
		if(!visited[u]){
			dfs(u,c+1);
		}
	}
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,a,b;

    cin>>n;
    n--;

    while(n--){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1,0);
    maxLength = INT_MIN;
    memset(visited,0,sizeof(visited));  //clear visited array
    dfs(maxNode,0);

    cout << maxLength << "\n";

    return 0;
}