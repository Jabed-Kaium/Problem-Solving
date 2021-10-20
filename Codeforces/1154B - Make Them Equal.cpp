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

	int n;
	cin >> n;
	int a[n] , b[n];
	int mini = INT_MAX, maxi = INT_MIN , tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
		mini = min(mini, a[i]);
		maxi = max(maxi, a[i]);
	}
	int diff = (maxi - mini) / 2 , d = maxi - mini;
	tmp = maxi - diff;
	for (int i = 0; i < n; i++) {
		if (a[i] > tmp)a[i] -= diff;
		else if (a[i] < tmp)a[i] += diff;
	}
	for (int i = 0; i < n; i++) {
		if (b[i] > mini)b[i] -= d;
	}
	bool check = true , check2 = true;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] != a[i + 1])
			check = false;
		if (b[i] != b[i + 1])
			check2 = false;
	}
	if (check)
		cout << diff << "\n";
	else if (check2)
		cout << d << "\n";
	else
		cout << "-1\n";

	return 0;
}