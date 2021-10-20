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
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll cnt = 0;
		for (int i = 1; i < 32 && n > 0; i++) {
			ll temp = (1 << i);
			temp--;
			ll res = (temp * (temp + 1) / 2);
			if (res <= n) {
                cnt++;
				n -= res;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}