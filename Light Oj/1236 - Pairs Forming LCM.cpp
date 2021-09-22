
/*
    method : number of pairs(i,j) that forms lcm = n is,
             ((2e1+1)(2e2+1)...(2ek+1)+1)/2   ,where e1,e2,....,ek are power of
             respective prime factors.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bitset<10000002> bs;
vector<int>prime;
vector<ll> primeFactors;

void sieve(int upper_Bound)
{
    bs.set();
    bs[0] = bs[1] = 0;
    prime.push_back(2);
    for(int i=3; i*i<=upper_Bound+1; i+=2)
    {
        if(bs[i])
        {
            for(int j=i*i; j<=upper_Bound+1; j+=i)
            {
                bs[j]=0;
            }
        }
    }
    for(int i=3; i<=upper_Bound; i+=2){
        if(bs[i])prime.push_back(i);
    }
}

void prime_factorization(ll n)
{
  ll i,j,cnt;
  for(i=0; prime[i]*prime[i]<=n && i<prime.size(); i++){
    if(n%prime[i]==0){
    cnt=0;
    while(n%prime[i]==0){
      n/=prime[i];
      cnt++;
    }
    primeFactors.push_back(cnt);   //storing the power of all prime factors
  }
  }
  if(n>1){
    primeFactors.push_back(1);
  }
}

ll solve(ll n){
    primeFactors.clear();
    prime_factorization(n);

    ll sum=1;

    for(int i=0; i<primeFactors.size(); i++){
        sum *= 2*primeFactors[i]+1;
    }
    sum = (sum/2)+1;

    return sum;
}

int main()
{
    sieve(10000002);
    ll t,n;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n;
        ll ans = solve(n);

        printf("Case %d: %lld\n", i,ans);
    }

    return 0;
}