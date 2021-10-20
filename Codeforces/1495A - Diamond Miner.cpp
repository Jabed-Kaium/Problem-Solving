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

const int MAXN = 100005;
int X[MAXN], Y[MAXN], n, t1, t2;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	int tc;
	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &n);
		t1 = 0, t2 = 0;
		for (int i = 1; i <= 2 * n; i++) {
			int x, y;
			scanf("%d%d", &x, &y);
			if (y == 0) {
				X[t1++] = abs(x);
			}
			else {
				Y[t2++] = abs(y);
			}
		}
		sort(X, X + t1);
		sort(Y, Y + t2);
		double ans = 0;
		for (int i = 0; i < n; i++) {
			ans += sqrt(1.0 * X[i] * X[i] + 1.0 * Y[i] * Y[i]);
		}

		printf("%.15lf\n", ans);
	}

	return 0;
}