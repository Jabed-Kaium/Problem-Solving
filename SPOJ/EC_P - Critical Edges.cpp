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
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};

const int MX = 1005;
vector<pair<int,int> > edgeList;
vector<int> vec[MX];
int in[MX] , low[MX] , vis[MX];
int timer;
int n,m,a,b;

void dfs(int node,int par = -1){
    vis[node] = 1;
    in[node] = low[node] = timer++;
    for(int child : vec[node]){
        if(child == par)continue;
        if(vis[child] == 1){
            low[node] = min(low[node] , in[child]);
        }
        else{
            dfs(child,node);
            if(low[child] > in[node]){
                int mini = min(node,child);
                int maxi = max(node,child);
                edgeList.pb({mini,maxi});
            }
            low[node] = min(low[node] , low[child]);
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fastio
    
    int t;
    cin>>t;
    for(int tt=1; tt<=t; tt++){
        for(int i=0; i<MX; i++){
            vec[i].clear();
            low[i] = in[i] = vis[i] = 0;
        }
        timer=0;
        edgeList.clear();

        cin>>n>>m;
        while(m--){
            cin>>a>>b;
            vec[a].pb(b);
            vec[b].pb(a);
        }

        dfs(1 , -1);

        cout << "Caso #" << tt << "\n";
        
        if(edgeList.size() > 0){
            cout << edgeList.size() << "\n";
            sort(edgeList.begin() , edgeList.end());
            for(auto p : edgeList){
                cout << p.first << " " << p.second << "\n";
            }
        }
        else{
            cout << "Sin bloqueos\n";
        }
    }

    return 0;
}