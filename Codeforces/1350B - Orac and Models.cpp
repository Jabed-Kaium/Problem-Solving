#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define ff first
#define ss second
#define sc(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define fo(i,n) for(int i=0; i<n; i++)
#define foo(i,n) for(int i=1; i<=n; i++)
#define FO(a,b) for(int i=a; i<=b; i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define pqf priority_queue<int>
#define pqr priority_queue<int,vi,greater<int> >
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)  //number of zeroes before first set bit
#define mod 1000000007
#define pi acos(-1)

int arr[100005],dp[100005];

int LIS(int n){

    int res = 1; //longest subsequence will be minimum 1

    for(int i=1; i<=n; i++){
        for(int j=i+i; j<=n; j+=i){
            if(arr[i]<arr[j]){
                dp[j] = max(dp[j],dp[i]+1);
            }
        }
    }

    for(int i=1; i<=n; i++){
        res = max(res,dp[i]);
    }

    return res;

}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,n;
    sc(t);
    while(t--){
        sc(n);
        foo(i,n){
            sc(arr[i]);
            dp[i] = 1;
        }

        int ans = LIS(n);

        cout<<ans<<endl;
    }

    return 0;
}