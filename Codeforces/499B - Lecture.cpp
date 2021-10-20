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

	int n, m;
	string s1, s2;
	vector<string> given, ans;
	map<string, string > mpp;
	cin >> n >> m;
	while (m--) {
		cin >> s1 >> s2;
		mpp[s1] = s2;
		mpp[s2] = s1;
	}
	while (n--) {
		cin >> s1;
		s2 = mpp[s1];
		if (s2.length() < s1.length()) {
			ans.pb(s2);
		}
		else {
			ans.pb(s1);
		}
	}

	for (auto p : ans) {
		cout << p << " ";
	}
	cout << "\n";

	return 0;
}