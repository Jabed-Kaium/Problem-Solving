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

	int n, m;
	bool flag = true;
	cin >> n >> m;
	int a[n + 1][m + 1] , ans[n + 1][m + 1];
	clr(ans);
	vector< pair<int, int> > v;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == 1)
				flag = false;
		}
	}
	if (flag == true) {
		cout << "0\n";
		return 0;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (a[i][j] == 1) {
				if (a[i + 1][j] == 1 && a[i][j + 1] == 1 && a[i + 1][j + 1] == 1)
				{
					v.pb({i, j});
					ans[i][j] = 1 , ans[i][j + 1] = 1, ans[i + 1][j] = 1, ans[i + 1][j + 1] = 1;
				}
			}
		}
	}
	if (v.size() == 0) {
		cout << "-1\n";
		return 0;
	}
	bool check = true;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] != ans[i][j])
				check = false;
		}
	}
	if (!check) {
		cout << "-1\n";
		return 0;
	}
	cout << v.size() << "\n";
	for (auto p : v) {
		cout << p.first << " " << p.second << "\n";
	}

	return 0;
}