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

const int N = 10000005;
vector <bool> prime(N);
vector <int> primes;

void sieve() {
	int MAXN = N;

	for (int i = 1; i <= MAXN; i++)prime[i] = 1;

	prime[0] = prime[1] = 0;

	for (int i = 2; i * i <= MAXN; i++) {
		if (prime[i]) {
			for (int j = i * i; j <= MAXN; j += i) {
				prime[j] = 0;
			}
		}
	}

	for (int i = 2; i < MAXN; i++) {
		if (prime[i])
			primes.pb(i);
	}
}

void show(int t, int ans)
{
	cout << "Case " << t << ": " << ans << "\n";
}

void solve(int n, int tc)
{
	int ans = 0;
	int i = 0 , j = primes.size() - 1;

	while (i < j) {
		if (primes[i] + primes[j] < n)
			i++;
		else if (primes[i] + primes[j] > n)
			j--;
		else {
			ans++;
			i++;
			j--;
		}
	}

	int l = primes.size();
	for (int i = 0; i < l; i++) {
		if (primes[i] + primes[i] == n) {
			ans++;
			break;
		}
	}

	show(tc , ans);
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
		int n;
		cin >> n;
		solve(n, tc);
	}

	return 0;
}