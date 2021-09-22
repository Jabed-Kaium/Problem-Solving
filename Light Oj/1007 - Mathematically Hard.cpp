#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long

ll phi[5000006];

void sievephi(ll n)
{
  ll i,j;
  //initialization
  for(i=1; i<=n; i++)phi[i]=i;

  phi[0]=0;
  phi[1]=1;

  for(i=2; i<=n; i++){
    if(phi[i]==i) //if i is prime
    {
    for(j=i; j<=n; j+=i){
      //phi[j] will be divisible by if i
      //so no need to worry
      phi[j] = (phi[j]/i) * (i-1);
    }
  }
  }
}

int main()
{
  ll t,a,b;
  sievephi(5000006);
  for(ll i=1; i<=5000006; i++)phi[i]=phi[i]*phi[i];
  phi[0]=0;
  for(ll i=1; i<=5000006; i++)phi[i]=phi[i-1]+phi[i];
  scanf("%lu", &t);
  for(int i=1; i<=t; i++){
    scanf("%lu %lu", &a,&b);
    printf("Case %lu: %lu\n", i,phi[b]-phi[a-1]);
  }

  return 0;
}
