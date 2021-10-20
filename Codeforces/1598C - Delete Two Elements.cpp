#include<bits/stdc++.h>
using namespace std;
#define int         long long
#define endl        "\n"
#define ff          first
#define ss          second
#define pb          push_back
#define mp          make_pair
#define yes         cout<<"YES\n"
#define no          cout<<"NO\n"
#define clr(a)      memset(a,0,sizeof(a))
#define reset(a)    memset(a,-1,sizeof(a))
#define mod         1000000007
#define pi          acos(-1)
#define fastio      ios_base::sync_with_stdio(false);cin.tie(NULL);

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// for chess knight move
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

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
		int n;
		cin>>n;
		double a[n], sum=0, k;
		int cnt=0;
		map<double,double> m;
		for(int i=0; i<n; i++){
			cin>>a[i];
			sum+=a[i];
			m[a[i]]++;
		}
		k = sum*1.0/n;
		for(int i=0; i<n; i++){
			double f = 2*k - a[i];
			m[a[i]]--;
			if(m[f] > 0){
				cnt += m[f];
			}
		}
		cout << cnt << "\n";
    }

    return 0;
}