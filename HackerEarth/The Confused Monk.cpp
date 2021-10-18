#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll a[100];

ll gcd(ll a,ll b)
{
  ll temp;
  while(b!=0){
    temp = b;
    b = a%b;
    a = temp;
  }
  return a;
}

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
  ll i,j,n,ans,res=1,final_ans;
  scanf("%lld", &n);
  for(i=0; i<n; i++){
    scanf("%lld", &a[i]);
    if(i==0)ans=a[0];
    ans = gcd(a[i],ans);
  }
  for(i=0; i<n; i++){
    res = (res*a[i])%mod;
  }
  final_ans = bigmod(res,ans,mod);
  printf("%lld\n", final_ans);

  return 0;
}
