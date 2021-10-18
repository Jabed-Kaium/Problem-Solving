#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll bigmod(ll a,ll b)
{
  if(b==0)return 1%mod;
  ll x = bigmod(a,b/2);
  x = (x*x)%mod;
  if(b%2==1)x=(x*a)%mod;
  return x;
}

int main()
{
  ll a,b;
  scanf("%lld %lld", &a,&b);
  ll ans = bigmod(a,b);
  printf("%lld\n", ans);

  return 0;
}
