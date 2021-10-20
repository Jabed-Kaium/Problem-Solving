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

	ll n;
	cin >> n;
	ll a[n];
	for (ll i = 0; i < n; i++)
		cin >> a[i];
	ll pre[n] = {0};
	ll suf[n] = {0};
	pre[0] = a[0];
	for (ll i = 1; i < n; i++)
		pre[i] = a[i] + pre[i - 1];
	suf[n - 1] = a[n - 1];
	for (ll i = n - 2; i >= 0; i--) {
		suf[i] = a[i] + suf[i + 1];
	}
	ll ans = 0;
	ll i = 0, j = n - 1;
	while (i < j) {
		if (pre[i] == suf[j]) {
			ans = max(ans, pre[i]);
			i++ , j--;
		}
		else if (pre[i] > suf[j]) {
			j--;
		}
		else if (pre[i] < suf[j]) {
			i++;
		}
	}
	if (pre[i] == suf[j] && i < j)ans = max(ans, pre[i]);
	cout << ans << "\n";

	return 0;
}