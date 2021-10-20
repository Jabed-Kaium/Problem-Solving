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

	ll t;
	cin >> t;
	while (t--) {
		ll n;
		ll range = 30;
		cin >> n;
		if (n <= range) {
			cout << "NO\n";
		}
		else if ( (n - 30) == 6 || (n - 30) == 10 || (n - 30) == 14) {
			cout << "YES\n";
			cout << "6 10 15 " << (n - 31) << "\n";
		}
		else {
			cout << "YES\n";
			cout << "6 10 14 " << (n - 30) << "\n";
		}
	}

	return 0;
}