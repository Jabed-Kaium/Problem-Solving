#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    ll  n,k;

    cin>>t;
    while(t--){
        cin>>n>>k;
        ll temp = n;
        
        for(ll i=2; i<=k; i++){
            ll min_v = 1e18;
            ll max_v = -1e18;
            while(temp>0){
                ll rem = temp%10;
                max_v = max(max_v,rem);
                min_v = min(min_v,rem);
                temp /= 10;
            }

            n += (min_v * max_v);
            if(min_v == 0)break;
            temp = n;
        }

        cout<< n <<"\n";
    }

    return 0;
}