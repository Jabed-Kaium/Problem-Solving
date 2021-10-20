#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define endl 		"\n"
#define ff 			first
#define ss 			second
#define pb 			push_back
#define mp 			make_pair
#define yes 		cout<<"YES\n"
#define no  		cout<<"NO\n"
#define clr(a)  	memset(a,0,sizeof(a))
#define reset(a)	memset(a,-1,sizeof(a))
#define mod 		1000000007
#define pi 			acos(-1)
#define fastio 		ios_base::sync_with_stdio(false);cin.tie(NULL);

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// for chess knight move
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int a[50005][5];

bool check(int x, int y)
{
	int cnt=0;

	for(int i=0; i<5; i++){
		if(a[x][i] < a[y][i])cnt++;
	}

	return cnt>=3;
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	for(int i=0; i<n; i++){
    		for(int j=0; j<5; j++){
    			cin>>a[i][j];
    		}
    	}

    	int curr = 0;

    	for(int i=1; i<n; i++){
    		if(check(i,curr))curr=i;
    	}

    	bool flag = true;

    	for(int i=0; i<n; i++){
    		if(check(i,curr))flag = false;
    	}

    	if(flag)cout << curr+1 << "\n";
    	else cout << "-1\n";
    }

    return 0;
}