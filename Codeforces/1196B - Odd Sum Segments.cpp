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

	int t;
	cin >> t;
	while (t--)
	{
		ll n, k, x;
		queue < pair<ll, ll> > q;
		cin >> n >> k;
		for (ll i = 1; i <= n; i++) {
			cin >> x;
			q.push({x, i});
		}
		ll sum = 0;
		vector<ll> ans;
		while (!q.empty() && k > 1) {
			auto p = q.front();
			if (p.ff % 2 != 0) {
				ans.pb(p.ss);
				k--;
			}
			q.pop();
		}
		while (!q.empty()) {
			sum += q.front().ff;
			q.pop();
		}
		if (sum % 2 != 0) {
			ans.pb(n);
			cout << "YES\n";
			for (auto v : ans) {
				cout << v << " ";
			}
			cout << "\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}