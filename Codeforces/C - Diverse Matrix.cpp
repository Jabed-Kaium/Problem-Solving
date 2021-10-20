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

	int r, c;
	int a[501][501];
	cin >> r >> c;
	if (r == 1 && c == 1) {
		cout << "0\n";
	}
	else if (c == 1) {
		for (int i = 2; i <= r + 1; i++)
			cout << i << "\n";

		cout << "\n";
	}
	else {
		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				cout << (i * (r + j)) << " ";
			}
			cout << "\n";
		}
	}

	return 0;
}