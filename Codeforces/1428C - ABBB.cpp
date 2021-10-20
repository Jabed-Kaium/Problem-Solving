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
		stack<char> stk;
		cin >> s;
		stk.push(s[0]);
		for (int i = 1; i < s.length(); i++) {
			if (stk.empty() || s[i] == 'A') {
				stk.push(s[i]);
			}
			else if (s[i] == 'B') {
				stk.pop();
			}
		}

		cout << stk.size() << "\n";
	}

	return 0;
}