#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        ll maxi = max(a,b);
        ll mini = min(a,b);
        ll tmp,ans=0;
        while(maxi <= n){
            tmp = maxi+mini;
            mini = maxi;
            maxi = tmp;
            ans++;
        }

        cout << ans << "\n";
    }
    
    return 0;
}