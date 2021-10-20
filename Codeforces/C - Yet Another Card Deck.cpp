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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio

    vector<int>v[55];
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (v[x].empty()) {
            v[x].pb(i);
        }
    }

    while (q--) {
        int val;
        cin >> val;
        int ans = v[val].back();
        v[val].pop_back();
        cout << ans << " ";
        for (int i = 1; i <= 50; i++) {
            if (v[i].size() == 0)
                continue;
            else {
                if (v[i][0] < ans)
                    v[i][0]++;
            }
        }
        v[val].pb(1);
    }
    cout << "\n";

    return 0;
}