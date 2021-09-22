#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int dp[301][301];
int a[301][301];
int k;

int solve(int i,int j){
    if(a[i][j]==0)return 0;
    if(i==k-1)return a[i][j];
    if(dp[i][j] != -1)return dp[i][j];

    int r1 = 0, r2 = 0;
    r1 = a[i][j] + solve(i+1,j);
    r2 = a[i][j] + solve(i+1,j+1);

    dp[i][j] = max(r1,r2);

    return dp[i][j];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    for(int cases=1; cases<=t; cases++){
        int n;
        cin>>n;
        k = 2*n - 1;
        memset(a,0,sizeof(a));
        memset(dp,-1,sizeof(dp));

        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cin>>a[i][j];
            }
        }
        int l=1;
        for(int i=n; i<k; i++){
            for(int j=l; j<n; j++){
                cin>>a[i][j];
            }
            l++;
        }

        int ans = solve(0,0);
        printf("Case %d: %d\n", cases,ans);
    }
    

    return 0;
}