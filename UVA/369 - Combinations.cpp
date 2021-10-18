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

int dp[105][105];

int ncr(int n,int m)
{
    if(n==m)return 1;
    if(m==1)return n;
    if(dp[n][m] != -1)return dp[n][m];

    return dp[n][m] = ncr(n-1,m-1) + ncr(n-1,m);
}

signed main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    fastio

    int n,m;
    while(cin>>n>>m){
        if(n==0 && m==0)break;

        reset(dp);

        cout << n << " things taken " << m << " at a time is " << ncr(n,m) << " exactly.\n";
    }

    return 0;
}