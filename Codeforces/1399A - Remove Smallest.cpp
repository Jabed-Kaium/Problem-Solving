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
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n+1];
		for(ll i=0; i<n; i++){
			cin>>a[i];
		}
		if(n == 1){
			cout << "YES\n";
			continue;
		}
		sort(a,a+n);
		bool flag = true;
		for(ll i=0; i<n-1; i++){
			if(abs(a[i] - a[i+1]) > 1){
				flag = false;
				break;
			}
		}
		if(flag){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}

	return 0;
}