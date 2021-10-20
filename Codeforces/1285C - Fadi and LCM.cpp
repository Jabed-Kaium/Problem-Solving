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

ll GCD(ll a, ll b) {
    if (b == 0)return a;
    return GCD(b, a % b);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio

    ll n;
    cin >> n;
    ll a, b;

    for (ll i = sqrt(n) + 1; i >= 1; i--) {
        if (n % i == 0) {
            ll x = i;
            ll y = n / i;
            if ((x * y) / GCD(x, y) == n) {
                a = x, b = y;
                break;
            }
        }
    }
    cout << min(a, b) << " " << max(a, b) << "\n";


    return 0;
}