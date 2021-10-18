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
  int t,i,j,a,b,c,g;
  scanf("%d", &t);
  for(i=1; i<=t; i++){
    scanf("%d %d %d", &a,&b,&c);
    g = gcd(a,b);
    if(c%g==0){
      printf("Case %d: Yes\n", i);
    }
    else{
      printf("Case %d: No\n", i);
    }
  }

  return 0;
}
