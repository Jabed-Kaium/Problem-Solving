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
		ll n, m, k;
		cin >> n >> m >> k;
		ll a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		bool flag = true;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] == a[i + 1]) {
				m += min(a[i], k);
			}
			else if (a[i] < a[i + 1]) {
				ll diff = a[i + 1] - a[i];
				if (diff <= k) {
					m += min(a[i], k - diff);
				}
				else if (diff > k && m >= (diff - k)) {
					m -= (diff - k);
				}
				else {
					flag = false;
				}
			}
			else if (a[i] > a[i + 1]) {
				ll tmp = a[i + 1] - k;
				if (tmp >= 0) {
					m += (a[i] - tmp);
				}
				else {
					m += a[i];
				}
			}
		}
		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}