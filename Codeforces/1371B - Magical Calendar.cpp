#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k>=n){
            ll x = n-1;
            ll ans = x*(x+1)/2;
            ans++;
            cout << ans << "\n";
        }
        else{
            ll ans = k*(k+1)/2;
            cout << ans << "\n";
        }
    }

    return 0;
}