#include<bits/stdc++.h>
using namespace std;
#define int long long
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

signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	int t;
	cin>>t;
	while(t--){
		int n,s=0;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			s ^= a[i];
		}
		if(s == 0)
		{
			cout << "YES\n";
		}
		else
		{
			int t=0,cnt=0;
			for(int i=0; i<n; i++){
				t ^= a[i];
				if(t == s){
					cnt++;
					t=0;
				}
			}

			if(cnt>1 && t == 0)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}

	return 0;
}