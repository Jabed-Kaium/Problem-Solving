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

int p[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
int t, n, cnt, a[1005] , b[1005];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio

    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i] , b[i] = 0;

        cnt = 1;
        int m = 1 , flag = 0;
        for (int i = 0; i < 11; i++) {
            flag = 0;
            for (int j = 0; j < n; j++) {
                if (a[j] % p[i] == 0 && b[j] == 0) {
                    b[j] = cnt;
                    flag = 1;
                    m = max(m, cnt);
                }
            }
            if (flag)cnt++;
        }

        cout << m << "\n";

        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << "\n";
    }

    return 0;
}