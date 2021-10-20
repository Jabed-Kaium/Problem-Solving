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
		int a, b, c, aa, bb, cc, ans1 = 0, ans2 = 0;
		cin >> a >> b >> c;
		aa = a, bb = b, cc = c;

		while (c >= 2 && b >= 1) {
			ans1 += 3;
			c -= 2;
			b -= 1;
		}
		while (b >= 2 && a >= 1) {
			ans1 += 3;
			b -= 2;
			a -= 1;
		}
		while (bb >= 2 && aa >= 1) {
			ans2 += 3;
			bb -= 2;
			aa -= 1;
		}
		while (cc >= 2 && bb >= 1) {
			ans2 += 3;
			cc -= 2;
			bb -= 1;
		}

		cout << max(ans1, ans2) << "\n";
	}

	return 0;
}