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

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n & 1) {
            cout << n / 2 << " " << n / 2 << " " << 1 << "\n";
        }
        else {
            if ((n / 2) & 1) {
                cout << n / 2 - 1 << " " << n / 2 - 1 << " " << 2 << "\n";
            }
            else {
                cout << n / 2 << " " << (n / 2) / 2 << " " << (n / 2) / 2 << "\n";
            }
        }
    }

    return 0;
}