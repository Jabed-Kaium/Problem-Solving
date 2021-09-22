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

int trailing_zero(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i *= 5) {
        res += n / i;
    }
    return res;
}

signed main()
{
// #ifndef ONLINE_JUDGE
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
// #endif

    fastio

    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        int low = 1 , high = 1e18 , mid;
        int n , ans = -1;
        cin >> n;
        while (low <= high) {
            mid = (low + high) / 2;
            if (trailing_zero(mid) > n) {
                high = mid - 1;
            }
            else if (trailing_zero(mid) < n) {
                low = mid + 1;
            }
            else {
                ans = mid;
                high = mid - 1;
            }
        }

        if (ans == -1) {
            cout << "Case " << tc << ": " << "impossible\n";
        }
        else {
            cout << "Case " << tc << ": " << ans << "\n";
        }
    }

    return 0;
}