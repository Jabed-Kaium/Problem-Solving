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

int a[3];
int vis[300005];

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
		char s[300005];
		int n;
		cin >> n;
		cin >> s;
		clr(a);
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '-')a[0]++;
			else if (s[i] == '>')a[1]++;
			else if (s[i] == '<')a[2]++;
		}
		if (a[1] == 0 || a[2] == 0)
		{
			cout << n << "\n";
			continue;
		}
		clr(vis);
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (i == 0 && s[i] == '-') {
				cnt++;
				vis[i] = 1;
				continue;
			}
			if (s[i - 1] == '-' && vis[i] == 0) {
				cnt++;
				vis[i] = 1;
			}
			if (s[i] == '-' && vis[i] == 0) {
				cnt++;
				vis[i] = 1;
			}
		}
		if (s[n - 1] == '-' && vis[0] == 0) {
			cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}