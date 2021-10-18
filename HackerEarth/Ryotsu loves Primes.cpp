#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>prime;
int mark[1000002];

void sieve(int n)
{
  int i,j,limit = sqrt(n*1.0)+2;
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
  sieve(1000000);
  int n,k,t,i,l,j,x,sum;
  cin>>t;
  while(t--){
    sum=0;
    cin>>n>>k;
    for(i=1; i<=n; i++){
      cin>>x;
      if(mark[x]==0)prime.push_back(x);
    }
     l=prime.size();
    for(i=k-1; i<l; i+=k){
      sum += prime[i];
    }

    cout<<sum<<"\n";
    prime.clear();
  }

  return 0;
}
