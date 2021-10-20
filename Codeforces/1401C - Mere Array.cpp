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

int a[1000001] , b[1000001];

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
		int n , m = INT_MAX , k = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			b[i] = a[i];
			m = min(m, a[i]);
		}
		sort(b, b + n);
		for (int i = 0; i < n; i++)
			if (a[i] != b[i] && a[i] % m > 0)
				k = 1;

		if (k)
			cout << "NO\n";
		else
			cout << "YES\n";
	}

	return 0;
}