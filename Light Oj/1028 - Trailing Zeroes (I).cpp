#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000000007
ll mark[1000007];
vector <ll> prime;

void sieve()
{
  ll i,j,n = 1000000,limit=sqrt(1000000);
  mark[0]=1;
  mark[1]=1;
  for(i=4; i<=n; i+=2)mark[i]=1;

  prime.push_back(2);

  for(i=3; i<=n; i+=2){
    if(!mark[i]){
      prime.push_back(i);
      if(i<=limit){
        for(j=i*i; j<=n; j += 2*i){
          mark[j] = 1;
        }
      }
    }
  }
}

ll prime_factorization(ll n)
{
  ll i,j,ans=1;
  for(i=0; prime[i]*prime[i]<=n && i<prime.size(); i++){
    ll c=0;
    if(n%prime[i]==0){
    while(n%prime[i]==0){
      c++;
      n/=prime[i];
    }
    ans *= (c+1);
  }
  }
  if(n>1){
    ans *= 2;
  }
  return ans;
}

int main()
{
  sieve();
  ll t,n,i,j,res;
  scanf("%lld", &t);
  for(i=1; i<=t; i++){
    scanf("%lld", &n);
    res = prime_factorization(n);
    printf("Case %lld: %lld\n", i,res-1);
  }

  return 0;
}
