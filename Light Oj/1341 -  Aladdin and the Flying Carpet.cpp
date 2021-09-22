#include<bits/stdc++.h>
using namespace std;
#define int long long
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

const int N = 1000005;
vector<bool> prime(N);
vector<int>primes;

void sieve()
{
	for (int i = 0; i < N; i++)
		prime[i] = 1;
	prime[0] = prime[1] = 0;
	for (int i = 2; i * i < N; i++) {
		if (prime[i]) {
			for (int j = i * i; j < N; j += i)
				prime[j] = 0;
		}
	}

	for (int i = 2; i < N; i++) {
		if (prime[i])
			primes.pb(i);
	}
}

int count_divisor(int n)
{
	int ans = 1;
	int len = primes.size();
	for (int i = 0; i < len && primes[i]*primes[i] <= n; i++) {
		int cnt = 0;
		while (n % primes[i] == 0) {
			cnt++;
			n /= primes[i];
		}
		ans *= (cnt + 1);
	}
	if (n > 1)ans *= 2;

	return ans;
}

signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	sieve();

	int t;
	cin >> t;
	for (int tc = 1; tc <= t; tc++) {
		int n, m;
		cin >> n >> m;
		if (m * m >= n) {
			cout << "Case " << tc << ": " << "0" << "\n";
			continue;
		}
		int d = count_divisor(n);
		d /= 2;
		for (int i = 1; i < m; i++) {
			if (n % i == 0)
				d--;
		}
		cout << "Case " << tc << ": " << d << "\n";
	}

	return 0;
}