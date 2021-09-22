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

struct edge {
    int a, b, x;
};

const int MX = 105 , INF = 1000000000;
int n, m, p, in, e;
vector<edge> edgelist;
vector<int> dis(MX);

bool solve()
{
    for (int i = 0; i < MX; i++) {
        dis[i] = INF;
    }
    edgelist.clear();

    cin >> n >> m >> p;
    for (int i = 0; i < m; i++) {
        struct edge tmp;
        cin >> tmp.a >> tmp.b >> in >> e;
        tmp.x = p * e - in;
        edgelist.pb(tmp);
    }

    dis[0] = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            if (dis[edgelist[j].a] + edgelist[j].x < dis[edgelist[j].b]) {
                dis[edgelist[j].b] = dis[edgelist[j].a] + edgelist[j].x;
            }
        }
    }

    for (int j = 0; j < m; j++) {
        if (dis[edgelist[j].a] + edgelist[j].x < dis[edgelist[j].b]) {
            return true;
        }
    }

    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio

    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        bool ans = solve();
        if (ans) {
            cout << "Case " << tc << ": " << "YES\n";
        }
        else {
            cout << "Case " << tc << ": " << "NO\n";
        }
    }

    return 0;
}