#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t,n,mini,maxi,i,j;
  cin>>t;
  while(t--){
    ll a=0,b=0;
    cin>>n;
    a += pow(2,n);
    for(i=1; i<=(n-1)/2; i++){
      a += pow(2,i);
    }
    for(j=i; j<=n-1; j++){
      b += pow(2,j);
    }
    printf("%d\n", abs(a-b));
  }

  return 0;
}