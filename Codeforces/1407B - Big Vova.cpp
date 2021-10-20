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
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	fastio

	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll> v, ans;
		vector<ll> it, itt;
		ll x;
		for (int i = 0; i < n; i++) {
			cin >> x;
			v.pb(x);
		}
		sort(v.begin(), v.end());
		ll gcd = v.back();
		ans.pb(gcd);
		v.pop_back();
		while (v.size() > 0) {
			ll tmp = 0, i, pos = 0;
			for (i = 0; i < v.size(); i++) {
				ll g = GCD(gcd, v[i]);
				if (g > tmp) {
					tmp = g;
					pos = i;
				}
			}
			ans.pb(v[pos]);
			v.erase(v.begin() + pos);
			gcd = tmp;
		}

		for (auto p : ans) {
			cout << p << " ";
		}
		cout << "\n";
	}

	return 0;
}