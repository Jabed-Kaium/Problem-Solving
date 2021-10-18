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

const int N = 200;
const int W = 200;
const int MAX = 1005;
int dp[N + 2][W + 2];

int knapsack(int wt[], int val[], int sum, int n) {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {
			if (i == 0) {
				dp[i][j] = MAX;
			}
			if (j == 0) {
				dp[i][j] = 0;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			if (wt[i - 1] <= j && val[i - 1] != -1) {
				dp[i][j] = min(val[i - 1] + dp[i][j - wt[i - 1]] , dp[i - 1][j]);
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	return dp[n][sum] >= MAX ? -1 : dp[n][sum];
}

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
		clr(dp);
		int n, sum;
		cin >> n >> sum;
		int wt[sum + 1] , val[sum + 1];
		for (int i = 0; i < sum; i++) {
			cin >> val[i];
			wt[i] = i + 1;
		}

		int ans = knapsack(wt, val, sum, sum);

		cout << ans << "\n";
	}

	return 0;
}