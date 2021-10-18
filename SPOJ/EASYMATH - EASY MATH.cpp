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

int lcm(int a, int b){
	return a*b / __gcd(a,b);
}


signed main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	fastio

	int t;
	cin>>t;
	while(t--)
	{
		int n,m,a,d;
		cin>>n>>m>>a>>d;
		n--;
		vector<int> v;
		v.pb(a);
		v.pb(a+d);
		v.pb(a+(2*d));
		v.pb(a+(3*d));
		v.pb(a+(4*d));

		int k = v.size();

		int sum1 = 0;
		for(int mask=1; mask<(1<<k); mask++){
			int tmp=1,bits=0;
			for(int i=0; i<k; i++){
				if(mask & (1<<i)){
					bits++;
					tmp = lcm(tmp,v[i]);
				}
			}
			if(bits & 1){
				sum1 += (n/tmp);
			}
			else{
				sum1 -= (n/tmp);
			}
		}

		sum1 = n - sum1;

		int sum2 = 0;
		for(int mask=1; mask<(1<<k); mask++){
			int tmp=1,bits=0;
			for(int i=0; i<k; i++){
				if(mask & (1<<i)){
					bits++;
					tmp = lcm(tmp,v[i]);
				}
			}
			if(bits & 1){
				sum2 += (m/tmp);
			}
			else{
				sum2 -= (m/tmp);
			}
		}

		sum2 = m - sum2;

		cout << sum2-sum1 << "\n";

	}

	return 0;
}