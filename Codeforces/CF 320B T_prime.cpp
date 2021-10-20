#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000005
ll prime[MAX];

void sieve()
{
  prime[0]=prime[1]=1;
  for(ll i=4; i<=MAX; i+=2){
    prime[i]=1;
    }
    for(ll i=3; i*i<=MAX; i+=2){
      if(prime[i]==0){
        for(ll j=i*i; j<=MAX; j+=i){
          prime[j]=1;
        }
      }
    }
}

int main()
{

  sieve();
  ll n,i,s,p;
  cin>>n;
  for(i=0; i<n; i++)
  {
    cin>>p;
    s=sqrt(p);
    if(s*s==p){
      if(prime[s]==0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
