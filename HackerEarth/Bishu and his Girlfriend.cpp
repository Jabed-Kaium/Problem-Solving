#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

vector <int> adj[1005];
int dis[1005];
bool visited[1005];

void dfs(int v,int d){
    dis[v] = d;
    visited[v] = true;
    for(int i=0; i<adj[v].size(); i++){
        int u = adj[v][i];
        if(!visited[u]){
            dfs(u,d+1);
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,a,b,q,m;
    set<int>s;
    multimap<int,int> mp;
    multimap<int,int>::iterator it;

    cin>>n;
    int temp = n-1;
    while(temp--){
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    cin>>q;

    while(q--){
        cin>>m;
        s.insert(m);
    }

    dfs(1,0);

    for(int i=2; i<=n; i++){
        mp.insert(make_pair(dis[i],i));
    }

    int ans;

    for(it = mp.begin(); it!=mp.end(); it++){
        if(s.find(it->second) != s.end()){
            ans = it->second;
            break;
        }
    }

    cout << ans << "\n";

    return 0;
}