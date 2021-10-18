#include<bits/stdc++.h>
using namespace std;
#define ll long long

int mark[10000002];
vector<int>prime;
vector<int>::iterator it;

void sieve(int n)
{
  int i,j,limit = sqrt(n*1.0)+2;
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

int main()
{
  sieve(10000000);
  int t,n,i,j;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    for(it = lower_bound(prime.begin(),prime.end(),n); it!=prime.end(); it++){
      if((*it-1)%11==0)break;
    }
    printf("%d\n", *it);
  }

  return 0;
}
