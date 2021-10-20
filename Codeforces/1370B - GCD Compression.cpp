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

	int t;
	cin >> t;
	while (t--) {
		stack <int> odd, even;
		int n, x, tmp = 0;
		cin >> n;
		for (int i = 1; i <= 2 * n; i++) {
			cin >> x;
			if (x % 2 == 0) {
				even.push(i);
			}
			else {
				odd.push(i);
			}
		}

		while (tmp < n - 1 && even.size() > 1) {
			int x = even.top();
			even.pop();
			int y = even.top();
			even.pop();
			cout << x << " " << y << "\n";
			tmp++;
		}
		while (tmp < n - 1 && odd.size() > 1) {
			int x = odd.top();
			odd.pop();
			int y = odd.top();
			odd.pop();
			cout << x << " " << y << "\n";
			tmp++;
		}
	}

	return 0;
}