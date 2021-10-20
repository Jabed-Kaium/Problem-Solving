#include<bits/stdc++.h>
using namespace std;
#define int long long
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

// for chess knight move
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	int t;
	cin >> t;
	while (t--) {
		int a, b, xa, xb, c1 = 0, c2 = 0;
		cin >> a >> b;
		xa = a;
		xb = b;
		string s;
		cin >> s;
		int l = s.length();
		bool flag = true;

		for (int i = 0; i < l; i++) {
			if (s[i] == '0')a--;
			else if (s[i] == '1')b--;
		}

		for (int i = 0; i <= l / 2; i++) {
			int j = l - i - 1;
			if (s[i] != '?' && s[j] != '?' && s[i] != s[j]) {
				flag = false;
			}
		}
		if (flag) {
			for (int i = 0; i <= l / 2; i++) {
				int j = l - i - 1;
				if (s[i] == '?' && s[j] != '?' && i != j) {
					s[i] = s[j];
					if (s[i] == '0' && a > 0)a--;
					else if (s[i] == '1' && b > 0) b--;
				}
				else if (s[i] != '?' && s[j] == '?' && i != j) {
					s[j] = s[i];
					if (s[i] == '0' && a > 0)a--;
					else if (s[i] == '1' && b > 0)b--;
				}
				if (a < 0 || b < 0)flag = false;
			}
		}
		if (l & 1 && flag) {
			int i = l / 2;
			if (s[i] == '?') {
				if (a & 1) {
					s[i] = '0';
					a--;
				}
				else if (b & 1) {
					s[i] = '1';
					b--;
				}
				else flag = false;
			}
		}
		if (flag) {
			for (int i = 0; i <= l / 2; i++) {
				int j = l - i - 1;
				if (s[i] == '?' && s[j] == '?') {
					if (a > 1) {
						s[i] = s[j] = '0';
						a -= 2;
					}
					else if (b > 1) {
						s[i] = s[j] = '1';
						b -= 2;
					}
					else flag = false;
				}
			}
		}

		if (flag == false || a < 0 || b < 0)
			cout << "-1\n";
		else
		{
			for (int i = 0; i < l; i++) {
				if (s[i] == '0')c1++;
				else if (s[i] == '1')c2++;
			}

			if (xa != c1 || xb != c2)
				cout << "-1\n";
			else
				cout << s << "\n";
		}
	}

	return 0;
}