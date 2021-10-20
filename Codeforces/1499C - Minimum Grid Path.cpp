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
		int n;
		cin >> n;
		vector<int> v(n + 1);
		for (int i = 1; i <= n; i++)
			cin >> v[i];
		vector< pair<int, int> > pre(n + 1);
		pre[1] = {v[1], v[1]};
		pre[2] = {v[2], v[2]};

		for (int i = 3; i <= n; i += 2) {
			pre[i].ff = pre[i - 2].ff + v[i];
			pre[i].ss = min(pre[i - 2].ss , v[i]);
		}

		for (int i = 4; i <= n; i += 2) {
			pre[i].ff = pre[i - 2].ff + v[i];
			pre[i].ss = min(pre[i - 2].ss , v[i]);
		}

		int ans = 1e18;

		for (int i = 2; i <= n; i++) {
			int tot = 0;
			if (i % 2 == 0) {
				int cnt = i / 2;
				tot += pre[i].ff + (pre[i].ss * (n - cnt));
				cnt = (i - 1) / 2 + 1;
				tot += pre[i - 1].ff + (pre[i - 1].ss * (n - cnt));
			}
			else {
				int cnt = i / 2 + 1;
				tot += pre[i].ff + (pre[i].ss * (n - cnt));
				cnt = (i - 1) / 2;
				tot += pre[i - 1].ff + (pre[i - 1].ss * (n - cnt));
			}
			ans = min(ans, tot);
		}

		cout << ans << "\n";

	}

	return 0;
}