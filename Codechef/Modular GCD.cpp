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

ll bigmod(ll a, ll n, ll d) {
	ll res = 1;
	while (n) {
		if (n % 2) {
			res = ((res % d) * (a % d)) % d;
			n--;
		}
		else {
			a = ((a % d) * (a % d)) % d;
			n /= 2;
		}
	}
	return res;
}

ll gcd(ll a, ll b, ll n) {
	if (a == b) {
		return (bigmod(a, n, mod) + bigmod(b, n, mod)) % mod;
	}

	ll candidate = 1;
	ll num = a - b;
	for (ll i = 1; i * i <= num; i++) {
		if (num % i == 0) {
			ll temp = (bigmod(a, n, i) + bigmod(b, n, i)) % i;
			if (temp == 0)candidate = max(candidate, i);

			temp = (bigmod(a, n, num / i) + bigmod(b, n, num / i)) % (num / i);
			if (temp == 0)candidate = max(candidate, num / i);
		}
	}
	return candidate % mod;
}

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	fastio

	ll t, a, b, n;
	cin >> t;
	while (t--) {
		cin >> a >> b >> n;
		cout << gcd(a, b, n) << "\n";
	}

	return 0;
}