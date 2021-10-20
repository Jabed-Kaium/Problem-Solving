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

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int x;
		set <int> s;
		for (int i = 0; i < n; i++) {
			cin >> x;
			if (x % 2 == 0) {
				s.insert(x);
			}
		}
		int ans = 0;
		while (!s.empty()) {
			auto it = s.end();
			it--;
			int tmp = (*it);
			s.erase(it);
			tmp /= 2;
			ans++;
			if (s.find(tmp) == s.end() && tmp % 2 == 0) {
				s.insert(tmp);
			}
		}

		cout << ans << "\n";
	}

	return 0;
}