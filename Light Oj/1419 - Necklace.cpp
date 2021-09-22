#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

ll bigmod(ll a,ll b,ll m)
{
  if(b==0)return 1%m;
  ll x = bigmod(a,b/2,m);
  x = (x*x)%m;
  if(b%2==1)x=(x*a)%m;
  return x;
}

int main()
{
    ll t,n,k,tt=0;
    cin>>t;
    while(t--){
        ll ans=0;
        cin>>n>>k;
        for(ll i=1; i<=n; i++){
            ans += bigmod(k,__gcd(i,n),MOD);
            ans%=MOD;
        }
        printf("Case %lld: %lld\n", ++tt,(bigmod(n,MOD-2,MOD)*ans)%MOD);
    }

    return 0;
}