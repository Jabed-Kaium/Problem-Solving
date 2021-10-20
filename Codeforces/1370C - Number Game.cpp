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

	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll tmp = n, t1 = 0, t2 = 0;
		while (tmp % 2 == 0) {
			t2++;
			tmp /= 2;
		}
		for (ll i = 3; i * i <= tmp; i++) {
			while (tmp % i == 0) {
				t1++;
				tmp /= i;
			}
		}
		if (tmp > 1)t1++;

		if ((!t1 && (t2 != 1)) || (t2 == 1 && t1 == 1)) {
			cout << "FastestFinger\n";
		}
		else
			cout << "Ashishgup\n";

	}

	return 0;
}