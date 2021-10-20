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

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int x;
		int fre[101];
		clr(fre);
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			fre[x]++;
		}
		int ans = 0;
		for (int i = 2; i <= 100; i++) {
			int tmp = 0;
			for (int j = 1; j <= (i - 1) / 2; j++) {
				tmp += min(fre[j], fre[i - j]);
			}
			if (i % 2 == 0) {
				tmp += (fre[i / 2] / 2);
			}
			ans = max(ans, tmp);
		}

		cout << ans << "\n";
	}

	return 0;
}