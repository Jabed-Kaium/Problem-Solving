#include<bits/stdc++.h>
using namespace std;
#define int long long
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

signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	int t;
	cin >> t;
	while (t--) {
		int n, w, x, tmp, tmp2;
		cin >> n >> w;
		map<int, int> mpp;
		for (int i = 0; i < n; i++) {
			cin >> x;
			mpp[x]++;
		}

		int c = 0;
		map<int, int>::iterator it, itt;
		bool flag = true;
		while (flag) {
			int tmp = w;
			it = mpp.end();
			it--;
			while (it != mpp.begin()) {
				if (tmp >= (it->ff)) {
					if (it->ss >= tmp / it->ff) {
						it->ss -= (tmp / it->ff);
						tmp -= ((it->ff) * (tmp / it->ff));
					}
					else {
						tmp -= (it->ff) * (it->ss);
						it->ss = 0;
					}
				}
				it--;
			}
			it = mpp.begin();
			if (tmp >= (it->ff)) {
				if (it->ss >= tmp / it->ff) {
					it->ss -= (tmp / it->ff);
					tmp -= ((it->ff) * (tmp / it->ff));
				}
				else {
					tmp -= (it->ff) * (it->ss);
					it->ss = 0;
				}
			}

			bool check = true;
			for (it = mpp.begin(); it != mpp.end(); it++) {
				if (it->ss > 0) {
					check = false;
				}
			}
			if (!check) {
				c++;
			}
			else
				break;
		}
		cout << c + 1 << "\n";
	}

	return 0;
}