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
		bool flag = true;
		int n;
		cin >> n;
		vector<int> v(4 * n);
		for (int i = 0; i < 4 * n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		int area = v[0] * v.back();

		for (int i = 0; i <= n; i++) {
			int l = 2 * i , r = (4 * n) - (2 * i) - 1;
			if (v[l] != v[l + 1] || v[r] != v[r - 1] || v[l]*v[r] != area) {
				flag = false;
			}
		}

		if (!flag)
			cout << "NO\n";
		else
			cout << "YES\n";
	}

	return 0;
}