#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fun(ll a[],int n,int indx)
{
  stack <ll> s;
  s.push(a[indx]);
  for(int i=indx+1; i<n; i++){
    if(s.size()==1 && s.top()<a[i]){
      s.push(a[i]);
    }
    else if(s.size()==2 && s.top()>a[i]){
      return a[i];
      break;
    }
  }
  return -1;
}

int main()
{
  ll ans;
  int n;
  scanf("%d", &n);
  ll a[n];
  for(int i=0; i<n; i++){
  scanf("%lld", &a[i]);
 }
  for(int i=0; i<n; i++){
     ans = fun(a,n,i);
    printf("%lld ", ans);
  }

  return 0;
}
