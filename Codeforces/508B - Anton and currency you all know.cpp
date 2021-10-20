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
	cin >> s;
	int len = s.length();
	int key = s[len - 1] - 48;
	bool flag = true;
	for (int i = 0; i < len - 1; i++) {
		int d = s[i] - 48;
		if (d % 2 == 0 && d < key) {
			swap(s[i], s[len - 1]);
			flag = false;
			break;
		}
	}
	if (flag) {
		for (int i = len - 2; i >= 0; i--) {
			int d = s[i] - 48;
			if (d % 2 == 0 && d > key) {
				swap(s[i], s[len - 1]);
				flag = false;
				break;
			}
		}
	}
	if (flag)cout << "-1\n";
	else cout << s << "\n";

	return 0;
}