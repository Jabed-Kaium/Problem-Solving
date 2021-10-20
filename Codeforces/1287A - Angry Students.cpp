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

	int t;
	cin >> t;
	while (t--) {
		int n, ans = 0;
		string s;
		int i;
		cin >> n;
		cin >> s;
		for (i = 0; i < n; i++) {
			if (s[i] == 'A')break;
		}
		int p = 0;
		for (int j = i + 1; j < n; j++) {
			if (s[j] == 'P')p++;
		}
		while (p) {
			for (int i = 1; i < n; i++) {
				if (s[i] == 'P' && s[i - 1] == 'A') {
					s[i] = 'A';
					p--;
					i++;
				}
			}
			ans++;
		}
		cout << ans << "\n";
	}

	return 0;
}