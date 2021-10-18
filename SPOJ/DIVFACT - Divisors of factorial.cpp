#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 50000
#define p 1000000007
ll mark[MAX+10];
vector <ll> prime;
vector<ll>powers;

void sieve(ll n)
{
  ll i,j,limit = sqrt(n*1.0)+2;
  mark[0]=1;
  mark[1]=1;
  for(i=4; i<=n; i+=2)mark[i]=1;

  //2 is prime
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

ll FastExpo(ll a,ll b)
{
  if(b==0)return 1;
  ll x = FastExpo(a,b/2);
  x = (x*x);
  if(b%2==1)x=(x*a);
  return x;
}

int main()
{
  sieve(MAX);

  ll t,n,temp,cnt,ans;
  cin>>t;
  while(t--){
    ans=1;
    cin>>n;
    /* calculating highest power of each prime factor of n! (Legendre's Formula) */
    for(int i=0; prime[i]<=n; i++){
      cnt=0; //counts highest power
      for(int j=1; j>0; j++){
        temp = FastExpo(prime[i],j);
        if(temp<=n){
          cnt += n/temp;
        }
        else{
          powers.push_back(cnt+1); //storing (highest power)+1 of each prime factor of n!
          break;
        }
      }
    }
    /* calculating all factors from power of prime factors */
    for(int i=0; i<powers.size(); i++){
      ans  = (ans*powers[i])%p;
    }
    cout<<ans<<"\n";
    powers.clear();
  }

  return 0;
}