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
        string s;
        cin >> s;
        int l = s.length();
        int i, tmp;
        for (i = 0; i < l; i++) {
            if (s[i] == '1') {
                s[i] = 'x';
                tmp = i;
                i++;
                break;
            }
        }
        for ( ; i < l; i++) {
            if (s[i] == '1' && i - tmp > 1) {
                s[i] = 'x';
                tmp = i;
            }
            else if (s[i] == '1' && i - tmp <= 1) {
                i++;
                break;
            }
        }
        for ( i ; i < l; i++) {
            if (s[i] == '0' && i - tmp > 1) {
                s[i] = 'x';
                tmp = i;
            }
            else if (s[i] == '0' && i - tmp <= 1) {
                i++;
                break;
            }
        }

        string ans = "" , st;
        for (int i = 0; i < l; i++) {
            if (s[i] == '0' || s[i] == '1')ans += s[i];
        }
        st = ans;
        sort(st.begin(), st.end());

        if (ans == st) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}