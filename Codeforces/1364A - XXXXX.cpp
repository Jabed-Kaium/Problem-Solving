#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[100005],suf[100005],pre[100005];
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        //prefix sum
        pre[0]=a[0];
        for(int i=1; i<n; i++){
            pre[i] = pre[i-1] + a[i];
        }

        //prefix sum reverse
        suf[n-1] = a[n-1];
        for(int i=n-2; i>=0; i--){
            suf[i] = suf[i+1] + a[i];
        }

        int ans = INT_MIN;

        //check for prefix subarray
        for(int i=0; i<n; i++){
            if(pre[i]%x){
                ans = max(ans,i+1);
            }
        }

        //check for suffix subarray
        for(int i=n-1,j=0; i>=0; i--,j++){
            if(suf[i]%x){
                ans = max(ans,j+1);
            }
        }

        if(ans == INT_MIN)cout << "-1\n";
        else cout<< ans << "\n";
    }
    
    return 0;
}