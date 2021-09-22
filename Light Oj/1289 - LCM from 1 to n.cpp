
/* using unsigned int so that
  we can obtain result by mod 2^32
*/


#include<bits/stdc++.h>
using namespace std;
const int MX = 100000005;
const int NX = 5761460;

bitset<MX> mark;
unsigned int product[NX];
int prime[NX],len;

//sieve for 10^8
int sieve()
{
    mark.reset();
    int k=0;
    for(int i=2; i*i<=MX; i++)
    {
        if(!mark[i])
        {
            for(int j=i*i; j<=MX; j+=i)
            {
                mark[j]=1;
            }
        }
    }
  for(int i=2; i<=MX; i++){
    if(!mark[i]){
      prime[k++] = i;
    }
  }
    return k;
}

//pre processing product
void preprocess(){
  len = sieve();
  product[0] = prime[0];
  for(int i=1; i<len; i++){
    product[i] = product[i-1] * prime[i];
  }
}

void solve(int n){
  unsigned int ans;

  int pos = lower_bound(prime, prime+len, n) - prime;
  if(prime[pos]!=n){
    pos--;
  }

  ans = product[pos];

  for(int j=0; prime[j]*prime[j]<=n; j++){
  int temp = prime[j];
  int temp2 = prime[j]*prime[j];
  while(temp2/temp==prime[j] && temp2<=n){
     temp = temp*prime[j];
     temp2 = temp2*prime[j];
   }
   ans = ans * (temp/prime[j]);
  }

  cout<<ans<<"\n";
}

int main()
{

  preprocess();

  int t,N,i;
  cin>>t;

  for(i = 1; i<=t; i++){
    cin>>N;

    cout<<"Case "<<i<<": ";
    solve(N);
  }

  return 0;
}