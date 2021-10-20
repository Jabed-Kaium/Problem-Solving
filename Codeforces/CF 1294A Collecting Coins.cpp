#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll arr[3];
  ll n,i,j,t,max;
  scanf("%lld", &t);
  while(t--){
    ll sum=0;
    max=0;
    for(i=0; i<3; i++){
      scanf("%lld", &arr[i]);
      if(arr[i]>max)max=arr[i];
    }
    for(i=0; i<3; i++){
      sum += abs(max-arr[i]);
    }
    scanf("%lld", &n);
    if(sum==n)printf("YES\n");
    else if(sum<n){
      ll res = n-sum;
      if(res%3==0)printf("YES\n");
      else printf("NO\n");
    }
    else{
      printf("NO\n");
    }
  }

  return 0;
}
