#include<bits/stdc++.h>
using namespace std;
#define ll long long
//1 if not prime,0 if Prime
ll mark[1000005];
vector <ll> prime;

void sieve(ll n)
{
  ll i,j,limit = sqrt(n+1);
  //1 is not prime,you can also mark 0
  mark[0]=1;
  mark[1]=1;
  //almost all the evens are not prime
  for(i=4; i<=n; i+=2)mark[i]=1;

  //run loops for only odds
  for(i=3; i<=limit; i+=2){
    // if not prime , no need to do "multiple cutting"
    if(!mark[i]){
        // loop through all multiples of i
        // greater than i*i
        for(j=i*i; j<=n; j += 2*i){
          // mark j not prime
          mark[j] = 1;
        }
      }
    }
}

int main()
{
  sieve(1000000);
  ll n,i,j,x;
  cin>>n;

  for(i=1; i<=n; i++){
    cin>>x;
    if(mark[x]==0)prime.push_back(x);
  }
  ll size = prime.size();
  if(size>=2){
    sort(prime.begin(),prime.end());
    cout<<prime[size-1]-prime[0]<<"\n";
  }
  else if(size==1){
    cout<<0<<"\n";
  }
  else{
    cout<<-1<<"\n";
  }

  return 0;
}
