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
        int tmp = k - 3;
        int tmp2 = n - tmp;
        int a, b, c;
        if (tmp2 & 1) {
            a = tmp2 / 2, b = tmp2 / 2, c = 1;
        }
        else {
            if ((tmp2 / 2) & 1) {
                a = (tmp2 / 2) - 1 , b = (tmp2 / 2) - 1 , c = 2;
            }
            else {
                a = (tmp2 / 2), b = (tmp2 / 2) / 2 , c = (tmp2 / 2) / 2;
            }
        }

        cout << a << " " << b << " " << c << " ";
        for (int i = 0; i < tmp; i++)
            cout << 1 << " ";

        cout << "\n";
    }

    return 0;
}