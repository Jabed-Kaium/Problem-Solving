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

    int n, m;
    cin >> m >> n;
    if (m == 1 && n == 0) {
        cout << "0 0\n";
    }
    else if (n > (m * 9))
    {
        cout << "-1 -1\n";
    }
    else
    {
        vector<int> v, v2;
        v.pb(1);
        v2.pb(1);
        for (int i = 1; i < m; i++) {
            v.pb(0);
            v2.pb(0);
        }
        int ans = 1;
        int len = v.size() - 1;
        for ( ; len >= 0; len--) {
            while (ans < n && v[len] < 9) {
                ans++;
                v[len]++;
            }
        }
        ans = 1;
        len = 0;
        for ( ; len < v2.size(); len++) {
            while (ans < n && v2[len] < 9) {
                ans++;
                v2[len]++;
            }
        }

        if (ans == n) {
            for (auto p : v)
                cout << p;
            cout << " ";
            // sort(v.begin(), v.end());
            // reverse(v.begin(), v.end());
            for (auto p : v2)
                cout << p;
            cout << "\n";
        }
        else {
            cout << "-1 -1\n";
        }
    }

    return 0;
}