#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  ll n,sum,rem,i,j,temp,temp2;
  cin>>t;
  while(t--){
    cin>>n;
    sum=0;
    rem=n;
    while(rem>=10){
      temp = rem/10;
      sum += temp*10;
      temp2 = temp*10;
      rem = (rem-temp2)+temp;
    }
    cout<<sum+rem<<"\n";
  }


  return 0;
}
