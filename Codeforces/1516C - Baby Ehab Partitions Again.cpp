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
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

const int N = 100;
const int W = 200000;
int arr[101];
int dp[N+2][W+2];
int n;

bool subsetSum(int arr[], int sum, int n){
    //initialization
    for(int i=0; i<=n; i++){
        for(int j=0; j<=sum; j++){
            if(i == 0){
                dp[i][j] = 0;   //false
            }
            if(j == 0){
                dp[i][j] = 1;   //true
            }
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=sum; j++){
            if(arr[i-1] <= j){
                dp[i][j] = (dp[i-1][j-arr[i-1]] || dp[i-1][j]);
            }
            else if(arr[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[n][sum];
}

bool Equal_Sum_Partition(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    //if total sum = odd its impossible , if total sum = even it may possible to partition into two subset where the sum are equal
    if(sum%2 != 0){
        return false;
    }
    else{
        return subsetSum(arr,sum/2,n);
    }
}

void solve()
{
	for(int i=0; i<n; i++){
		if(arr[i]&1){
			cout << "1\n" << i+1 << "\n";
			return;
		}
	}

	bool flag = true;
	while(flag){
		for(int i=0; i<n && flag; i++){
			if(arr[i]&1){
				cout << "1\n" << i+1 << "\n";
				flag = false;
			}
			else{
				arr[i] /= 2;
			}
		}
	}
}


signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

    cin>>n;    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool flag = Equal_Sum_Partition(arr,n);

    if(flag){
        solve();
    }
    else{
        cout << "0\n";
    }
	
	return 0;
}