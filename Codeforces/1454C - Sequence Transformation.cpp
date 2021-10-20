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
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	fastio

	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vector <ll> v(n) , res(n + 1, 1);
		for (ll i = 0; i < n; i++)
			cin >> v[i];
		n = unique(v.begin(), v.end()) - v.begin();
		v.resize(n);
		for (ll i = 0; i < n; i++) {
			res[v[i]]++;
		}
		res[v[0]]--;
		res[v[n - 1]]--;

		ll ans = INT_MAX;
		for (ll i = 0; i < n; i++)
		{
			ans = min(ans, res[v[i]]);
		}

		cout << ans << "\n";
	}

	return 0;
}