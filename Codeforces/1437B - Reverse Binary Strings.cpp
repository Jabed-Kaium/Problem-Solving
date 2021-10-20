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
		string s;
		int n;
		cin >> n >> s;
		s[n] = s[0];
		int cnt = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == s[i + 1])cnt++;
		}

		cout << cnt / 2 << "\n";
	}

	return 0;
}