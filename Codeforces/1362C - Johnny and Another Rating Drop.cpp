#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t,n;
    map <ll,ll> mp;
    map <ll,ll>::iterator it;
    for(ll i=1; i<=1e18+10; i*=2){
        mp[i] = i*2 - 1;
    }
    cin>>t;
    while(t--){
        cin>>n;
        it = mp.lower_bound(n);
        if(it->first == n){
            cout<<mp[n]<<"\n";
            continue;
        }
        --it;
        ll ans = 0;
        ll cnt = 0;
        while(cnt != n){
            if((it->first)+cnt <= n){
                cnt += it->first;
                ans += it->second;
            }
            --it;
        }

        cout<< ans << "\n";
    }


    return 0;
}