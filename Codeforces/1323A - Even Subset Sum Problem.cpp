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
		int n;
		cin >> n;
		int a[n + 2];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		int id = (-1), id1 = (-1), id2 = (-1);
		for (int i = 1; i <= n; i++) {
			if (a[i] % 2 == 0) {
				id = i;
				cout << "1\n";
				cout << i << "\n";
				break;
			}
		}
		if (id == -1) {
			int i;
			for (i = 1; i <= n; i++) {
				if (a[i] % 2 != 0) {
					id1 = i;
					i++;
					break;
				}
			}
			for ( ; i <= n; i++) {
				if (a[i] % 2 != 0) {
					id2 = i;
					break;
				}
			}

			if (id1 != -1 && id2 != -1) {
				cout << "2\n";
				cout << id1 << " " << id2 << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
	}

	return 0;
}