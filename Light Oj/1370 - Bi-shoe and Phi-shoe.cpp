#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000005
ll mark[MAX];

void sieve(ll n)
{
  ll i,j,limit = sqrt(n*1.0)+2;
  mark[0]=1;
  mark[1]=1;
  for(i=4; i<=n; i+=2)mark[i]=1;

  for(i=3; i<=limit; i+=2){
    if(!mark[i]){
        for(j=i*i; j<=n; j += 2*i){
          mark[j] = 1;
        }
      }
    }
}
int main()
{
    sieve(MAX);
    ll n,i,j,k,t,sum,x;
    scanf("%lld", &t);
    for(i=1; i<=t; i++){
      sum=0;
      scanf("%lld", &n);
      for(j=1; j<=n; j++){
        scanf("%lld", &x);
        for(k=x+1; ;k++){
          if(!mark[k]){
            sum+=k;
            break;
          }
        }
      }
      printf("Case %lld: %lld Xukha\n", i,sum);
    }
    return 0;
  }
