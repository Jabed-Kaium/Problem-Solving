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
		int n, a, b, c;
		cin >> n;
		cin >> a >> b >> c;
		string s;
		cin >> s;
		vector<int> cnt(26);
		for (char x : s) {
			cnt[x - 'A']++;
		}
		int sum = min(a, cnt['S' - 'A']) + min(b, cnt['R' - 'A']) + min(c, cnt['P' - 'A']);
		if (sum < (n + 1) / 2) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
			string t = "";
			for (int i = 0; i < n; i++) {
				if (s[i] == 'S' && a) {
					t += 'R';
					a--;
				}
				else if (s[i] == 'R' && b) {
					t += 'P';
					b--;
				}
				else if (s[i] == 'P' && c) {
					t += 'S';
					c--;
				}
				else {
					t += '_';
				}
			}
			for (int i = 0; i < n; i++) {
				if (t[i] != '_')continue;

				if (a) {
					t[i] = 'R';
					a--;
				}
				else if (b) {
					t[i] = 'P';
					b--;
				}
				else if (c) {
					t[i] = 'S';
					c--;
				}
			}
			cout << t << "\n";
		}

	}

	return 0;
}