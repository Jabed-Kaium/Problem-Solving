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

int dp[1005][1005];
int n, k;

int odd()
{
    clr(dp);
    for (int i = 1; i <= n - 1; i++) {
        dp[k - 1][i] = 1;
    }
    for (int i = k - 2; i >= 1; i--) {
        if (i & 1) {
            for (int j = n - 1; j >= 1; j--) {
                dp[i][j] = (dp[i + 1][j] % mod + dp[i][j + 1] % mod) % mod;
            }
        }
        else {
            for (int j = 1; j <= n - 1; j++) {
                dp[i][j] = (dp[i + 1][j] % mod + dp[i][j - 1] % mod) % mod;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= k - 1; i++) {
        for (int j = 1; j <= n - 1; j++) {
            ans = (ans % mod + dp[i][j] % mod) % mod;
        }
    }

    // for (int i = 0; i <= k; i++) {
    //     for (int j = 0; j <= n - 1; j++)
    //         cout << dp[i][j] << " ";
    //     cout << "\n";
    // }


    //return ans;
    return (ans % mod + 2 % mod) % mod;
}

int even()
{
    clr(dp);

    for (int i = 1; i <= n - 1; i++) {
        dp[k - 1][i] = 1;
    }
    for (int i = k - 2; i >= 1; i--) {
        if (i & 1) {
            for (int j = 1; j <= n - 1; j++) {
                dp[i][j] = (dp[i + 1][j] % mod + dp[i][j - 1] % mod) % mod;
            }
        }
        else {
            for (int j = n - 1; j >= 1; j--) {
                dp[i][j] = (dp[i + 1][j] % mod + dp[i][j + 1] % mod) % mod;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= k - 1; i++) {
        for (int j = 1; j <= n - 1; j++) {
            ans = (ans % mod + dp[i][j] % mod) % mod;
        }
    }


    // for (int i = 0; i <= k; i++) {
    //     for (int j = 0; j <= n - 1; j++)
    //         cout << dp[i][j] << " ";
    //     cout << "\n";
    // }


    //return ans;
    return (ans % mod + 2 % mod) % mod;
}

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
        cin >> n >> k;

        if (k == 1) {
            cout << "1\n";
            continue;
        }

        if (k & 1) {
            cout << odd() << "\n";
            // cout << "\n";
            // odd();
        }
        else {
            cout << even() << "\n";
            // cout << "\n";
            // even();
        }
    }

    return 0;
}