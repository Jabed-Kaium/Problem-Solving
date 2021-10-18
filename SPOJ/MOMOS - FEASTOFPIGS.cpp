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

int n,k;

int lcm(int a,int b){
	return a*b / __gcd(a,b);
}

int solve1()
{
	int a[n];
	int p[k];
	for(int i=0; i<k; i++){
		cin>>p[i];
	}

	clr(a);
	a[0] = 1;
	for(int i=0; i<k; i++){
		for(int j=p[i]; j<n; j+=p[i])
			a[j] = 1;
	}
	int cnt = 0;
	for(int i=0; i<n; i++)
		if(a[i] == 0)cnt++;

	return cnt;
}

int solve2()
{
	n--;
	int a[k];
	for(int i=0; i<k; i++)
		cin>>a[i];

	int sum=0;

	for(int mask=1; mask<(1<<k); mask++){
		int tmp=1, bits=0;
		for(int i=0; i<k; i++){
			if(mask & (1<<i)){
				bits++;
				tmp = lcm(tmp,a[i]);
			}
		}
		if(bits&1){
			sum += (n/tmp+1);
		}
		else{
			sum -= (n/tmp+1);
		}
	}

	return (n-sum+1);
}

signed main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	fastio

	cin>>n>>k;
	if(k>20){
		cout << solve1() << "\n";
	}
	else{
		cout << solve2() << "\n";
	}

	return 0;
}