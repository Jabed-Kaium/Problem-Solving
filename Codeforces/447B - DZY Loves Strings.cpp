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

	string s;
	int k, i, y , maxi = -1;
	cin >> s;
	cin >> k;
	map<char, int> map1;
	for (char x = 'a'; x <= 'z'; x++) {
		cin >> y;
		map1[x] = y;
		maxi = max(maxi, y);
	}

	int len = s.length() + k;

	int ans = 0;

	for (i = 0; i < s.length(); i++) {
		ans += (i + 1) * map1[s[i]];
	}
	for ( ; i < len; i++) {
		ans += (i + 1) * maxi;
	}

	cout << ans << "\n";

	return 0;
}