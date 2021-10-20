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

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// for chess knight move
// ll dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// ll dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vector<int> v[n+1];
		int uni[n+1],sum[n+1],res[n+1];
		for(int i=0; i<=n; i++)
			sum[i] = res[i] = 0;

		for(int i=0;i<n; i++)
			cin>>uni[i];

		for(int i=0; i<n; i++){
			int x;
			cin>>x;
			v[uni[i]].pb(x);
			sum[uni[i]] += x;
		}

		for(int i=1; i<=n; i++){
			if(v[i].size()>1)
				sort(v[i].begin(),v[i].end());
		}

		for(int i=1; i<=n; i++){
			int l = v[i].size();
			if(l>1){
				for(int j=1; j<l; j++)
					v[i][j] += v[i][j-1];
			}
		}

		for(int i=1; i<=n; i++){
			int sz = v[i].size();
			for(int j=1; j<=sz; j++){
				int tmp = sz % j;
				int s = 0;
				if(tmp>0){
					s = v[i][tmp-1];
				}
				res[j] += (sum[i] - s);
			}
		}

		for(int i=1; i<=n; i++)
			cout << res[i] << " ";
		cout << "\n";
	}

	return 0;
}