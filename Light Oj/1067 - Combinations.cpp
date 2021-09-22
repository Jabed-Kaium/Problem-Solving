#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000003
ll fact[1000002];

ll modInverse(ll a,ll b,ll m)
{
  if(b==0)return 1%m;
  ll x = modInverse(a,b/2,m);
  x = (x*x)%m;
  if(b%2==1)x=(x*a)%m;
  return x;
}

int main()
{
  ll t,n,r,i,j;
  fact[0]=1;
  for(i=1; i<=1000000; i++){
    fact[i] = (i*fact[i-1])%mod;
  }
  scanf("%lld", &t);
  for(i=1; i<=t; i++){
    scanf("%lld %lld", &n,&r);
    if(n==r || r==0){
      printf("Case %lld: 1\n", i);
      continue;
    }
    else if(r==1){
      printf("Case %lld: %lld\n", i,n);
      continue;
    }
    ll ans = ((fact[n]%mod)*(modInverse(fact[r],mod-2,mod)%mod)*(modInverse(fact[n-r],mod-2,mod)%mod))%mod;
    printf("Case %lld: %lld\n", i,ans);
  }

  return 0;
}
