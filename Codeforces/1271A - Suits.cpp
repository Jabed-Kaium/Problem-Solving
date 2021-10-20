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

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// //for chess knight move
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	fastio

	// int t;
	// cin >> t;
	// while (t--) {
	int a, aa, b, bb, c, cc, d, dd, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	aa = a, bb = b, cc = c, dd = d;
	int ans = 0;
	if (e > f) {
		ans += (min(a, d) * e);

		a -= min(a, d);
		d -= min(aa, d);

		ans += (f * (min(b, min(c, d))));

		cout << ans << "\n";
	}
	else {
		ans += (f * (min(b, min(c, d))));
		b -= min(b, min(c, d));
		c -= min(bb, min(c, d));
		d -= min(bb, min(cc, d));
		ans += (e * (min(a, d)));

		cout << ans << "\n";
	}
	//}

	return 0;
}