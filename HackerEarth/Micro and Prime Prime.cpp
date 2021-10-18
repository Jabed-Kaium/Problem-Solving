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

ll prime[1000001] , pp[1000001];

void sieve() {
	ll N = 1000000;
	for (ll i = 0; i <= N; i++)prime[i] = 1;

	prime[0] = prime[1] = 0;

	for (ll i = 2; i * i <= N; i++) {
		if (prime[i] == 1) {
			for (ll j = i * i; j <= N; j += i) {
				prime[j] = 0;
			}
		}
	}

	ll cnt = 0;
	for (ll i = 1; i <= N; i++) {
		if (prime[i] == 1)cnt++;
		if (prime[cnt] == 1) {
			pp[i] = 1;
		}
		else {
			pp[i] = 0;
		}
	}
	for (ll i = 1; i <= N; i++) {
		pp[i] += pp[i - 1];
	}
}

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	sieve();

	ll t;
	ll l, r;
	cin >> t;
	while (t--) {
		cin >> l >> r;
		cout << (pp[r] - pp[l - 1]) << "\n";
	}

	return 0;
}