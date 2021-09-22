#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll t,n,row,col;
  cin>>t;
  for(int i=1; i<=t; i++){
    cin>>n;
    ll x = ceil(sqrt(n)),y;
    if(x%2==0){
       y = n - ((x-1)*(x-1));
      if(y<x){
        row = x;
        col = y;
      }
      else{
        row = (x*x) -n + 1;
        col = x;
      }
    }
    else{
       y = n - ((x-1)*(x-1));
      if(y<x){
        row = y;
        col = x;
      }
      else{
        row = x;
        col = (x*x) - n + 1;
      }
    }

    printf("Case %d: %lld %lld\n", i,col,row);
  }

  return 0;
}