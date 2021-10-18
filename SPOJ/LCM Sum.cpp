//LCM sum
//Sum of LCM(1, n), LCM(2, n), LCM(3, n), … , LCM(n, n)
//LCM sum using eulers totient function

//formula : ∑LCM(i, n) = ((∑(d * ETF(d)) + 1) * n) / 2
//where ETF(d) is Euler totient function of d and d belongs to the set of divisors of n.

/////*****start*****/////
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000002

ll phi[MAX+2],ans[MAX+2];

void eulers_totient_function()
{
  ll i,j;
  for(i=1;i<=MAX;i++)
      phi[i]=i;
  for(i=2;i<=MAX;i++)
  {
      if(phi[i]==i)
      {
          for(j=i;j<=MAX;j+=i)
              phi[j]-=phi[j]/i;//Inclusion_Exclusion Law use
      }
  }
}

void LcmSum()
{
  for(ll i=1; i<=MAX; i++){
    // Summation of d * ETF(d) where
    // d belongs to set of divisors of n
    for(ll j=i; j<=MAX; j+=i){
      ans[j] += (i*phi[i]);
    }
  }
}

int main()
{
  eulers_totient_function();
  LcmSum();
  ll t,n;
  scanf("%lld", &t);
  while(t--){
    scanf("%lld", &n);
    ll answer = ans[n];
    answer = (answer+1)*n;
    answer = answer/2;
    printf("%lld\n", answer);
  }

  return 0;
}
