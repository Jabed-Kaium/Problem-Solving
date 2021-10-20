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

bool is_sub(string a, string b) {
    int l = b.length();
    for (int i = 0; i < l; i++) {
        string tmp = "";
        for (int j = i; j < l; j++) {
            tmp += b[j];
            if (tmp == a) {
                return true;
            }
        }
    }
    return false;
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
        string a, b;
        cin >> a >> b;
        if (a.length() > b.length()) {
            swap(a, b);
        }

        //cout << a << " " << b << "\n";

        int l1 = a.length() , l2 = b.length();
        int ans = -1;
        for (int i = 0; i < l1; i++) {
            string tmp = "";
            for (int j = i; j < l1; j++) {
                tmp += a[j];
                bool check = is_sub(tmp, b);
                if (check) {
                    ans = max(ans , (int)tmp.length());
                }
            }
        }

        //cout << ans << "\n";

        if (ans == -1) {
            cout << (int)a.length() + (int)b.length() << "\n";
        }
        else {
            cout << ((int)a.length() - ans) + ((int)b.length() - ans) << "\n";
        }
    }

    return 0;
}