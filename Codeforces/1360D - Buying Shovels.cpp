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

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	ll t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		if (n <= k) {
			cout << "1" << "\n";
		}
		else {
			ll ans = n;
			for (ll i = 2; i * i <= n; i++) {
				if (n % i == 0) {
					ll d1 = i;
					ll d2 = n / i;

					if (d1 <= k)
						ans = min(ans , n / d1);
					if (d2 <= k)
						ans = min(ans , n / d2);
				}
			}
			cout << ans << "\n";
		}

	}

	return 0;
}