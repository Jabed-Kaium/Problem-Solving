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

vector <int> v[1001];
vector <int> arr;

void NOD(int n)
{
	int c = 0;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			if (i * i == n)c++;
			else c += 2;
		}
	}
	v[c].pb(n);
}

signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	for (int i = 1; i <= 1000; i++) {
		NOD(i);
	}
	for (int i = 1; i <= 1000; i++) {
		if (!v[i].empty()) {
			for (int j = v[i].size() - 1; j >= 0; j--) {
				arr.pb(v[i][j]);
			}
		}
	}

	int t;
	cin >> t;
	for (int tc = 1; tc <= t; tc++) {
		int n;
		cin >> n;
		cout << "Case " << tc << ": " << arr[n - 1] << "\n";
	}

	return 0;
}