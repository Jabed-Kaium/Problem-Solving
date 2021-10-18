#include<bits/stdc++.h>
using namespace std;

int check(int n){
  int sami=0;
  while(true){
    if(n<1)break;
    if(n%3==0 && sami!=0)return n;

    n-=5;
    sami+=5;
  }
  return -1;
}

int main()
{
  int t,n;
  cin>>t;
  for(int i=1; i<=t; i++){
    cin>>n;
    printf("Case %d: %d\n", i,check(n));
  }

  return 0;
}