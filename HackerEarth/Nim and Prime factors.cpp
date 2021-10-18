#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000000
ll p[MAX][2];

int main()
{
  ll i,j,t,num;
  for(i=2; i<MAX; i++){
    if(!p[i][1]){
    for(j=i; j<=MAX; j+=i){
      p[j][0]=i;
      p[j][1]++;
    }
  }
  }
  scanf("%lld", &t);
  while(t--){
    scanf("%lld", &num);
    printf("%lld %lld\n", p[num][0],p[num][1]);
  }

  return 0;
}
