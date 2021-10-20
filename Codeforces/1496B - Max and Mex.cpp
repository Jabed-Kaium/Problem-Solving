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
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		int mexi = -1;
		bool flag = true;
		if (v[0] != 0) {
			mexi = 0;
			flag = false;
		}
		for (int i = 1; i < n; i++) {
			if (v[i] - v[i - 1] > 1 && mexi == -1) {
				mexi = v[i] + 1;
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << n + k << "\n";
		}
		else {
			int maximum = v[n - 1];
			set <int> s;
			for (auto p : v) {
				s.insert(p);
			}
			if (k == 0) {
				cout << s.size() << "\n";
			}
			else {
				s.insert((mexi + maximum + 1) / 2);
				cout << s.size() << "\n";
			}
		}
	}

	return 0;
}