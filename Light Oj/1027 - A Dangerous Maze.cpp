
/*
  Method : Expected Value
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    for(int i=1; i<=t; i++){
      int n;
      cin>>n;
      int x,cnt=0,sum=0;
      for(int i=0; i<n; i++){
        cin>>x;
        if(x>0)cnt++;
        sum+=abs(x);
      }
      if(cnt==0){
        printf("Case %d: inf\n", i);
        continue;
      }
      int g = __gcd(sum,cnt);
      printf("Case %d: %d/%d\n", i,sum/g,cnt/g);
    }

    return 0;
}