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

double ans[1000001];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio

	ans[0] = 0;
	for(int i=1; i<=1000000; i++){
		ans[i] = ans[i-1]  + log(i);
	}

	int t;
	cin>>t;
	for(int tc=1; tc<=t; tc++){
		ll n,b;
		cin>>n>>b;
		ll res = (ans[n] / log(b)) + 1;
		cout << "Case " << tc << ": " << res << "\n";
	}

    return 0;
}