#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define clr(a) memset(a,0,sizeof(a))
#define reset(a) memset(a,-1,sizeof(a))
#define mod 1000000007
#define pi acos(-1)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

// ll dx[] = { -1 , 0 , 1 , 0};
// ll dy[] = {0 , 1 , 0 , -1};

// //for chess knight move
// ll dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// ll dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

const int N = 10005;
int n,m,a,b,ans;
vector<int> vec[N];
vector<int> order;
bool vis[N];

void dfs(int node)
{
    vis[node] = 1;
    for(int x : vec[node]){
        if(!vis[x]){
            dfs(x);
        }
    }
    order.pb(node);
}

void dfs2(int node)
{
    vis[node] = 1;
    for(int x : vec[node]){
        if(!vis[x]){
            dfs(x);
        }
    }
}

void solve()
{
    for(int i=0; i<N; i++){
        vec[i].clear();
        vis[i] = 0;
    }
    order.clear();
    ans = 0;
    cin>>n>>m;
    while(m--){
        cin>>a>>b;
        vec[a].pb(b);
    }

    for(int i=1; i<=n; i++){
        if(vis[i] == 0){
            dfs(i);
        }
    }
    clr(vis);
    ans = 0;
    for(int i=order.size()-1; i>=0; i--){
        if(!vis[order[i]]){
            ans++;
            dfs2(order[i]);
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
    for(int tc=1; tc<=t; tc++){
        solve();
        cout << "Case " << tc << ": " << ans << "\n";
    }

    return 0;
}