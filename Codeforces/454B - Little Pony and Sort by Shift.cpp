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

	int n;
	cin >> n;
	int arr[n + 1];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int cnt = 0 , idx;
	for (int i = 0; i < n; i++) {
		if (arr[i + 1] < arr[i]) {
			idx = i;
			cnt++;
		}
	}

	if (cnt == 0) {
		cout << "0\n";
	}
	else if (cnt > 1) {
		cout << "-1\n";
	}
	else if (arr[0] < arr[n - 1]) {
		cout << "-1\n";
	}
	else {
		cout << (n - 1) - idx << "\n";
	}


	return 0;
}