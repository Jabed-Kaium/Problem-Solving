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
		int n, m, a;
		cin >> n >> m;
		set <int> s1, s2;
		int x;
		for (int i = 0; i < n; i++) {
			cin >> x;
			s1.insert(x);
		}
		for (int i = 0; i < m; i++) {
			cin >> x;
			s2.insert(x);
		}
		bool flag = false;
		for (auto p : s2) {
			if (s1.find(p) != s1.end()) {
				a = p;
				flag = true;
				break;
			}
		}

		if (flag) {
			cout << "YES\n";
			cout << "1 " << a << "\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}