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
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	ll t;
	cin >> t;
	while (t--) {
		ll n, a, b, c;
		cin >> n;
		ll arr[n + 1];
		for (ll i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		a = arr[0] * arr[1] * arr[2] * arr[3] * arr[n - 1];
		b = arr[n - 1] * arr[n - 2] * arr[n - 3] * arr[n - 4] * arr[n - 5];
		c = arr[0] * arr[1] * arr[n - 3] * arr[n - 2] * arr[n - 1];

		cout << max(a, max(b, c)) << "\n";
	}

	return 0;
}