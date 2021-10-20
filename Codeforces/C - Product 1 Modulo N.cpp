

#include<bits/stdc++.h>
using namespace std;
#define int long long
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

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio

    int n;
    cin >> n;
    int ok[n + 1];
    clr(ok);
    int p = 1;
    for (int i = 1; i < n; i++) {
        if (__gcd(i, n) == 1) {
            ok[i] = 1;
            p = (p % n * i % n) % n;
        }
    }
    if (p != 1) {
        ok[p] = 0;
    }

    int c = 0;
    for (int i = 1; i < n; i++)
        if (ok[i])
            c++;

    cout << c << "\n";

    for (int i = 1; i < n; i++) {
        if (ok[i] == 1)
            cout << i  << " ";
    }
    cout << "\n";

    return 0;
}