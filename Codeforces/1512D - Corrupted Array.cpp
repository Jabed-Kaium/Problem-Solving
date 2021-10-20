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
        int n, sum = 0;
        cin >> n;
        vector<int> v(n + 2);
        for (int i = 0; i < n + 2; i++) {
            cin >> v[i];
            sum += v[i];
        }

        int max1 = INT_MIN , max2 = INT_MIN , id1 = -1 , id2 = -1;
        for (int i = 0; i < n + 2; i++) {
            if (v[i] > max1) {
                max1 = v[i];
                id1 = i;
            }
        }
        for (int i = 0; i < n + 2; i++) {
            if (v[i] > max2 && i != id1) {
                max2 = v[i];
                id2 = i;
            }
        }

        //cout << max1 << " " << id1 << "\n" << max2 << " " << id2 << "\n";

        bool flag = false;

        if (!flag) {
            int idx;
            int tmp = sum - max1;
            for (int i = 0; i < n + 2; i++) {
                if (i != id1) {
                    if (tmp - v[i] == max1) {
                        idx = i;
                        flag = true;
                        break;
                    }
                }
            }
            if (flag) {
                for (int i = 0; i < n + 2; i++) {
                    if ((i != id1) && (i != idx))
                        cout << v[i] << " ";
                }
            }
        }

        if (!flag) {
            int idx;
            int tmp = sum - max2;
            for (int i = 0; i < n + 2; i++) {
                if (i != id2) {
                    if (tmp - v[i] == max2) {
                        idx = i;
                        flag = true;
                        break;
                    }
                }
            }
            if (flag) {
                for (int i = 0; i < n + 2; i++) {
                    if ((i != id2) && (i != idx))
                        cout << v[i] << " ";
                }
            }
        }

        if (!flag) {
            cout << "-1";
        }

        cout << "\n";
    }

    return 0;
}