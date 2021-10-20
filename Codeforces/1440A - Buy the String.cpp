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
		int n, c1, c2, h;
		string s;
		cin >> n >> c1 >> c2 >> h;
		cin >> s;
		int one = 0, zero = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '0')zero++;
			else one++;
		}
		vector<int> v;
		int temp = (zero * c1) + (one * c2);
		v.pb(temp);
		if (c1 > c2) {
			temp = (zero * h) + ((zero + one) * c2);
			v.pb(temp);
		}
		else {
			temp = (one * h) + ((zero + one) * c1);
			v.pb(temp);
		}
		sort(v.begin(), v.end());
		cout << v[0] << "\n";
	}

	return 0;
}