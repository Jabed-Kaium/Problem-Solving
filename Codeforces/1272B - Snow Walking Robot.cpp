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
		string s , ans = "";
		cin >> s;
		int l = 0, r = 0, u = 0, d = 0;
		int len = s.length();
		for (int i = 0; i < len; i++) {
			if (s[i] == 'L')l++;
			else if (s[i] == 'R')r++;
			else if (s[i] == 'U')u++;
			else d++;
		}
		if ((u == 0 || d == 0) && (l > 0 && r > 0))
		{
			cout << "2\nRL\n";
			continue;
		}
		if ((l == 0 || r == 0) && (u > 0 && d > 0))
		{
			cout << "2\nDU\n";
			continue;
		}
		for (int i = 0; i < min(l, r); i++)
			ans += 'R';
		for (int i = 0; i < min(u, d); i++)
			ans += 'D';
		for (int i = 0; i < min(l, r); i++)
			ans += 'L';
		for (int i = 0; i < min(u, d); i++)
			ans += 'U';

		cout << ans.length() << "\n";
		cout << ans << "\n";
	}

	return 0;
}