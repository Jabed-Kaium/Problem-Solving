#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mark[10000002];
vector <ll> prime;
set<ll>v1;
set<ll>v2;
set<ll>::iterator it;
set<ll>::iterator it2;

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

void prime_factorization_v1(ll n)
{
  ll i,j;
  sieve(sqrt(n));
  for(i=0; prime[i]*prime[i]<=n && i<prime.size(); i++){
    if(n%prime[i]==0){
    while(n%prime[i]==0){
      n/=prime[i];
      v1.insert(prime[i]);
    }
  }
  }
  if(n>1){
    v1.insert(n);
  }
}

void prime_factorization_v2(ll n)
{
  ll i,j;
  sieve(sqrt(n));
  for(i=0; prime[i]*prime[i]<=n && i<prime.size(); i++){
    if(n%prime[i]==0){
    while(n%prime[i]==0){
      n/=prime[i];
      v2.insert(prime[i]);
    }
  }
  }
  if(n>1){
    v2.insert(n);
  }
}

int main()
{
  ll n,m,i,j,sum=0;
  cin>>n>>m;
  prime_factorization_v1(n);
  prime.clear();
  prime_factorization_v2(m);

  if(v1.size()<v2.size()){
    for(it=v1.begin(); it!=v1.end(); it++){
      it2 = v2.lower_bound(*it);
      if(*it2==*it)sum+=(*it);
    }
    cout<<sum<<"\n";
  }
  else{
    for(it=v2.begin(); it!=v2.end(); it++){
      it2 = v1.lower_bound(*it);
      if(*it2==*it)sum+=(*it);
    }
    cout<<sum<<"\n";
  }
return 0;
}
