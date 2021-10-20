#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        ll a[n+5];
        ll pre[n+5];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a,a+n);

        for(int i=0,j=n-1; i<j; i++,j--){
             swap(a[i],a[j]);
        }
        pre[0]=a[0];
        for(int i=1; i<n; i++){
            pre[i] = pre[i-1] + a[i];
        }
        ll ans = 0;
        for(int i=0; i<n; i++){
            ll temp = pre[i]/(i+1);
            if(temp >= x){
                ll temp1 = i+1;
                ans = max(ans,temp1);
            }
        }
        
        cout<< ans << "\n";
    }

    return 0;
}