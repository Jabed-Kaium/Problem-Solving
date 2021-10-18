#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll t,n;
  cin>>t;
  while(t--){
    ll sum=0;
    cin>>n;
    if(n==1)cout<<"0"<<endl;
    else{
    for(ll i=2; i*i<=n; i++){
      if(i*i==n && n%i==0)sum+=i;
      else if(n%i==0){
        sum += (i+(n/i));
      }
    }
    cout<<sum+1<<endl;
  }
  }
}
