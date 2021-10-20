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
		ll n, ans=0;
		cin>>n;
		ll a[n+1] , b[n+1] , mini1 = INT_MAX, mini2 = INT_MAX;
		for(ll i=0; i<n; i++){
			cin>>a[i];
			mini1 = min(mini1,a[i]);
		}
		for(ll i=0; i<n; i++){
			cin>>b[i];
			mini2 = min(mini2,b[i]);
		}

		for(ll i=0; i<n; i++){
				if(a[i]>mini1 && b[i]>mini2){
					if(mini1 > mini2){
						ans += (a[i]-mini1);
						b[i] -= (a[i]-mini1);
						if(b[i] > mini2){
							ans += (b[i]-mini2);
						}
					}
					else{
						ans += (b[i]-mini2);
						a[i] -= (b[i]-mini2);
						if(a[i] > mini1){
							ans += (a[i]-mini1);
						}
					}
					continue;
				}
				if(a[i]>mini1){
					ans += (a[i] - mini1);
					continue;
				}
				if(b[i]>mini2){
					ans += (b[i] - mini2);
					continue;
				}
		}

		cout << ans << "\n";
		
	}

	return 0;
}