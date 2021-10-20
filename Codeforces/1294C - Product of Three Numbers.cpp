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

    int t;
    cin >> t;
    while (t--) {
        int n, cnt = 0;
        vector<int>v;
        cin >> n;
        for (int i = 2; i * i <= n && cnt < 2; i++) {
            if (n % i == 0) {
                v.pb(i);
                cnt++;
                n /= i;
            }
        }
        v.pb(n);

        if (v.size() < 3 || v[0] == v[1] || v[1] == v[2] || v[0] == v[2]) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        for (auto p : v)
            cout << p << " ";
        cout << "\n";
    }

    return 0;
}