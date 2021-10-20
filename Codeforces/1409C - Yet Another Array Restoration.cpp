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
		int n, x, y;
		cin >> n >> x >> y;
		bool flag = false;
		for (int d = 1; d <= (y - x) && !flag; d++) {
			if ((y - x) % d != 0)continue;
			vector<int> res;
			int need = n;
			int curr = y;
			while (curr >= 1 && need > 0) {
				res.pb(curr);
				need--;
				curr -= d;
			}
			curr = y;
			while (need > 0) {
				curr += d;
				res.pb(curr);
				need--;
			}
			sort(res.begin(), res.end());
			if (find(res.begin(), res.end(), x) != res.end()) {
				flag = true;
				for (auto p : res) {
					cout << p << " ";
				}
				cout << "\n";
			}
		}
	}

	return 0;
}