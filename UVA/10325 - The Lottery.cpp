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

int LCM(int a,int b){
	return a*b / __gcd(a,b);
}

signed main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	//fastio

	int n,m;
	while(scanf("%lld%lld", &n,&m) != EOF){
		int a[20];
		for(int i=0; i<m; i++)
			cin>>a[i];

		int sum = 0;

		for(int mask=1; mask<=(1<<m)-1; mask++){
			int lcm=1,bits=0;
			for(int i=0; i<m; i++){
				if(mask & (1<<i)){
					bits++;
					lcm = LCM(lcm,a[i]);
				}
			}
			int r = n/lcm;
			if(bits&1){
				sum += r;
			}
			else{
				sum -= r;
			}
		}

		cout << n-sum << "\n";
	}

	return 0;
}