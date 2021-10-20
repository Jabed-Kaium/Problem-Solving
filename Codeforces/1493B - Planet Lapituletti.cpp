#include<bits/stdc++.h>
using namespace std;
//#define int long long
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

    //fastio

    int x = 1000;
    int a[10] = {0,1,5,x,x,2,x,x,8,x};

    int t;
    int h,m,a1,a2,b1,b2;
    char c;
    cin>>t;
    while(t--){
    	
    	cin>>h>>m;
    	cin>>a1>>c>>a2;
    	while(1){
    		b1 = a[a2%10]*10 + a[a2/10];
    		b2 = a[a1%10]*10 + a[a1/10];

    		if(b1<h && b2<m){
    			printf("%02d:%02d\n", a1,a2);
    			break;
    		}

    		a2++;
    		if(a2==m)a2=0,a1 = (a1+1)%h;
    	}
    	
    }

    return 0;
}