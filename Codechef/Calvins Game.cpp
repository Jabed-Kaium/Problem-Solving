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

	ll n, k;
	cin >> n >> k;
	ll arr[n + 1];
	ll back[n + 1] = {0};
	ll fwrd[n + 1] = {0};

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	back[2] = arr[1];
	for (int i = 3; i <= n; i++) {
		back[i] = max(arr[i - 1] + back[i - 1] , arr[i - 2] + back[i - 2]);
	}
	for (int i = k + 1; i <= n; i++) {
		fwrd[i] = arr[i] + max(fwrd[i - 1] , fwrd[i - 2]);
	}
	ll ans = back[k] + fwrd[k];
	for (int i = k + 1; i <= n; i++) {
		ans = max(ans, back[i] + fwrd[i]);
	}

	cout << ans << "\n";

	return 0;
}