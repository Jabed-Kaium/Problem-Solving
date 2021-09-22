#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

vector <int> adj[100005];
bool visited[100005];
int cc_count,c;

void dfs(int v){
	visited[v] = true;
	for(int i=0; i<adj[v].size(); i++){

        int u = adj[v][i];

		if(!visited[u]){
            c++;
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
    
    int t;
    cin>>t;

    while(t--){
        memset(visited,0,sizeof(visited));
        for(int i=0; i<100005; i++){
            adj[i].clear();
        }
        cc_count = 0;

        int n,m,a,b;
        cin>>n>>m;

        while(m--){
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }

        ll res = 1;

        for(int i=1; i<=n; i++){
            if(visited[i] == 0){
                c=0;
                dfs(i);
                cc_count++;
                res = (res*(c+1))%mod;
            }
        }

        cout << cc_count << " " << res << "\n";
    }

    return 0;
}