#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000003

int main()
{
  ll arr[mod+1];
  ll n,x,t,i,j;
  arr[0]=1;
  for(i=1; i<=mod; i++){
    arr[i] = ((arr[i-1]%mod)*i)%mod;
  }
  scanf("%lld", &t);
  while(t--){
    scanf("%lld %lld", &n,&x);
    if(n>mod)printf("0\n");
    else{
      ll ans = ((arr[n]%mod) * (x%mod))%mod;
      printf("%lld\n", ans);
    }
  }

  return 0;
}
