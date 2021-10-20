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

const int N = 200005;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	int pre[N];
	for (int i = 0; i < 9; i++)
		pre[i] = 2;
	pre[9] = 3;
	for (int i = 10; i < N; i++) {
		pre[i] = (pre[i - 9] % mod + pre[i - 10] % mod) % mod;
	}

	int t;
	cin >> t;
	while (t--) {
		char s[12];
		int m;
		cin >> s;
		cin >> m;
		int ans = 0;
		for (int i = 0; i < strlen(s); i++) {
			int x = s[i] - '0';
			if (x + m < 10)
				ans += 1;
			else {
				int tmp = m - (10 - x);
				ans = (ans % mod + pre[tmp] % mod) % mod;
				ans %= mod;
			}
		}

		cout << ans << "\n";
	}

	return 0;
}