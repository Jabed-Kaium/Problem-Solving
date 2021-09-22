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

const int N = 1000005;
int dp[N][2];
int n, arr[N];

int solve(int i, int cnt, int n) {
	if (i >= n)return 0;
	int &ret = dp[i][cnt];
	if (ret != -1)return ret;
	ret = arr[i] + solve(i + 1, 0, n);
	if (cnt < 1) {
		ret = min(ret , solve(i + 1, cnt + 1, n));
	}
	return ret;
}

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	fastio

	reset(dp);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int ans1 = arr[0] + solve(1, 0, n);
	int ans2 = arr[1] + arr[n - 1] + solve(2, 0, n - 1);

	cout << min(ans1, ans2) << "\n";

	return 0;
}