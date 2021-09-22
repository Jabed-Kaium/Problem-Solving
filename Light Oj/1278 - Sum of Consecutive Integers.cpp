#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int MAX = 1e7+10;
const int NX = 1e6;
bool mark[MAX];
int prime[NX];
int idx;

void sieve()
{
  idx=0;
  ll i,j,limit = sqrt(MAX)+2;
  mark[0]=1;
  mark[1]=1;
  for(i=4; i<=MAX; i+=2)mark[i]=1;

  for(i=3; i<=MAX; i+=2){
    if(!mark[i]){
      prime[idx++]=i;
      if(i<=limit){
        for(j=i*i; j<=MAX; j += 2*i){
          mark[j] = 1;
        }
      }
    }
  }
}

ll solve(ll n)
{
  while(n%2==0){
      n/=2;
  }
  ll i,j,cnt,ans=1;
  for(i=0; prime[i]*prime[i]<=n && i<idx; i++){
    cnt=0;
    if(n%prime[i]==0){
        while(n%prime[i]==0){
        n/=prime[i];
        cnt++;
    }
    ans *= cnt+1;
  }
  }
  if(n>1){
    ans *= 2;
  }
  return ans-1;
}

int main()
{
    sieve();

    ll t,n,tt=00;
    cin>>t;
    while(t--){
        ll ans = 1;
        cin>>n;
        if(n==0)printf("Case %lld: 0\n",++tt);
        else
        printf("Case %lld: %lld\n", ++tt,solve(n));
    }

    return 0;
}