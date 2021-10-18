#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000002
ll mark[M];
vector <ll> prime;
vector <ll> primeFactors;

void sieve(ll n)
{
  ll i,j,limit = sqrt(n*1.0)+2;
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


void prime_factorization(ll n)
{
  ll i,j;
  sieve(sqrt(n));
  for(i=0; prime[i]*prime[i]<=n && i<prime.size(); i++){
    if(n%prime[i]==0){
    while(n%prime[i]==0){
      n/=prime[i];
      primeFactors.push_back(prime[i]);
    }
  }
  }
  if(n>1){
    primeFactors.push_back(n);
  }
}

int main()
{
  ll n,i,t;
  cin>>t;
  while(t--){
  cin>>n;
  prime_factorization(n);
  sort(primeFactors.begin(),primeFactors.end());
  cout<<primeFactors[primeFactors.size()-1]<<"\n";
  primeFactors.clear();
  prime.clear();
  memset(mark,0,1000002);
  }

  return 0;
}
