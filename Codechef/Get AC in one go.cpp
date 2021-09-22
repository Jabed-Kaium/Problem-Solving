#include<bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a,int b)
{
  int temp;
  while(b!=0){
    temp = b;
    b = a%b;
    a = temp;
  }
  return a;
}

int main()
{
  ll t,a,b,g;
  scanf("%lld", &t);
  while(t--){
    scanf("%lld %lld", &a,&b);
    g = gcd(a,b);
    if(g==1){
      printf("%lld\n", (a*b-a-b+1));
    }
    else{
      printf("-1\n");
    }
  }

  return 0;
}
