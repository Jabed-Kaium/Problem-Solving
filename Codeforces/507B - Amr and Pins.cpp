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

	fastio

	double r, x1, y1, x2, y2;
	cin >> r >> x1 >> y1 >> x2 >> y2;

	double d = sqrt(pow(x2 - x1 , 2) + pow(y2 - y1 , 2));

	double ans = ceil(d / (2 * r));

	cout << ans << "\n";

	return 0;
}