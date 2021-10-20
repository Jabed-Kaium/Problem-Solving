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
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> a[i][j];

		bool flag = 0;
		if (a[0][0] > 2 || a[0][m - 1] > 2 || a[n - 1][0] > 2 || a[n - 1][m - 1] > 2)
			flag = 1;
		for (int i = 1; i < m - 1; i++)
		{
			if (a[0][i] > 3 || a[n - 1][i] > 3)
				flag = 1;
		}
		for (int i = 1; i < n - 1; i++)
		{
			if (a[i][0] > 3 || a[i][m - 1] > 3)
				flag = 1;
		}
		for (int i = 1; i < n - 1; i++)
		{
			for (int j = 1; j < m - 1; j++)
			{
				if (a[i][j] > 4)
					flag = 1;
			}
		}

		if (flag == 1)
		{
			cout << "NO\n";
		}
		else
		{
			a[0][0] = 2 , a[0][m - 1] = 2 , a[n - 1][0] = 2 , a[n - 1][m - 1] = 2 ;
			for (int i = 1; i < m - 1; i++)
			{
				a[0][i] = 3 , a[n - 1][i] = 3;
			}
			for (int i = 1; i < n - 1; i++)
			{
				a[i][0] = 3 , a[i][m - 1] = 3;
			}
			for (int i = 1; i < n - 1; i++)
			{
				for (int j = 1; j < m - 1; j++)
				{
					a[i][j] = 4;
				}
			}

			cout << "YES\n";
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					cout << a[i][j] << " ";
				}
				cout << "\n";
			}
		}
	}

	return 0;
}