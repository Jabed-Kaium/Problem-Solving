#include<bits/stdc++.h>
using namespace std;
#define int         unsigned long long
#define endl        "\n"
#define ff          first
#define ss          second
#define pb          push_back
#define mp          make_pair
#define yes         cout<<"YES\n"
#define no          cout<<"NO\n"
#define clr(a)      memset(a,0,sizeof(a))
#define reset(a)    memset(a,-1,sizeof(a))
#define mod         1000000007
#define pi          acos(-1)
#define fastio      ios_base::sync_with_stdio(false);cin.tie(NULL);

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// for chess knight move
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};


vector<int> g[200005];
vector<int> ans[200005];
int sz,n;

void all_clear()
{
    for(int i=0; i<=n; i++){
        ans[i].clear();
        g[i].clear();
    }
}

void dfs(int u)
{
    ans[sz].pb(u);
    for(int v : g[u]){
        if(v != g[u][0])
            sz++;
        dfs(v);
    }
}


signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin>>t;
    while(t--){

        all_clear();

        sz=0;
        int root;
        cin>>n;

        for(int i=1; i<=n; i++){
            int p;
            cin>>p;
            if(p==i){
                root = p;
                continue;
            }
            g[p].pb(i);
        }

        dfs(root);

        cout << sz+1 << "\n";

        for(int i=0; i<=sz; i++){
            cout << ans[i].size() << "\n";
            for(int x : ans[i])
                cout << x << " ";
            cout << "\n";
        }

        cout << "\n";

    }

    return 0;
}