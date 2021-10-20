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
		int a, b;
		cin >> a >> b;
		int ans = 0;
		int diff = abs(a - b);
		while (diff >= 5) {
			int n = diff / 5;
			ans += n;
			diff -= (n * 5);
		}
		while (diff >= 2) {
			int n = diff / 2;
			ans += n;
			diff -= (n * 2);
		}
		while (diff >= 1) {
			int n = diff / 1;
			ans += n;
			diff -= (n * 1);
		}

		cout << ans << "\n";
	}

	return 0;
}