#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[2000006];
int main()
{
  ll i,n,k,max1=0,max2=0;
  scanf("%lld %lld", &n,&k);
  for(i=0; i<n; i++){
    scanf("%lld", &a[i]);
    if(a[i]>max1 && i<k-1)max1=a[i];
    if(a[i]>max2)max2=a[i];
  }

  if(n==1 && k%2!=0){
    printf("-1\n");
    return 0;
  }
  if(n==1 && k%2==0){
    printf("%lld\n", a[0]);
    return 0;
  }
  if(k==1){
    printf("%lld\n", a[1]);
    return 0;
  }

  if(k<n){
    printf("%lld\n", max(max1,a[k]));
    return 0;
  }
  if(k>n){
    printf("%lld\n", max2);
    return 0;
  }
  if(k==n){
    printf("%lld\n", max1);
  }

  return 0;
}
