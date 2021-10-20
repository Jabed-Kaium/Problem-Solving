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

	// int t;
	// cin >> t;
	// while (t--) {

	// }

	double r;
	cin >> r;
	r--;

	double x, y;
	bool flag = false;
	for (x = 1; x <= 10000000 && !flag; x++) {
		y = ((r - (x * x) - x) / (2 * x));
		if (ceil(y) == floor(y)) {
			if (y <= 0)continue;
			flag = true;
			cout << (ll)x << " " << (ll)y << "\n";
			break;
		}
	}
	if (!flag) {
		cout << "NO\n";
	}

	return 0;
}