#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define clr(a) memset(a,0,sizeof(a))
#define reset(a) memset(a,-1,sizeof(a))
#define mod 1000000007
#define pi acos(-1)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	fastio

	int t;
	cin >> t;
	while (t--) {
		ll total = 0, cnt;
		ll n;
		cin >> n;
		ll a[n + 2];
		for (int i = 0; i < n; i++)cin >> a[i];

		vector<bool> vis(n + 2, false);

		for (int i = 31; i >= 0; i--) {
			cnt = 0;
			for (int j = 0; j < n; j++) {
				if (((1 << i)&a[j]) && !vis[j]) {
					cnt++;
					vis[j] = true;
				}
			}
			total += ((cnt * (cnt - 1)) / 2);
		}
		cout << total << "\n";
	}

	return 0;
}