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
	while(t--)
	{	
		int n,m,x;
		cin>>n>>m;
		vector <int> v;
		vector <int> r[n+1];
		int a[n+1][m+1];
		clr(a);
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin>>x;
				v.pb(x);
				r[i].pb(x);
			}
		}

		sort(v.begin(),v.end());

		bool flag;
		int col = 1;

		for(int i=0; i<v.size() && col<=m; i++){
			x = v[i];
			flag = false;
			for(int j=1; j<=n && !flag; j++){
				for(int k=0; k<r[j].size() && !flag; k++){
					if(x == r[j][k]){
						a[j][col] = r[j][k];
						r[j][k] = 0;
						col++;
						flag = true;
					}
				}
			}
		}

		for(int i=1; i<=n; i++){
			for(int j=0; j<r[i].size(); j++){				
				if(r[i][j]){
					for(int k=1; k<=m; k++){
						if(a[i][k] == 0){
							a[i][k] = r[i][j];
							r[i][j] = 0;
							break;
						}
					}
				}
			}
		}

		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++)
				cout << a[i][j] << " ";
			cout << "\n";
		}
	}

	return 0;
}