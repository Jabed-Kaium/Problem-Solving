#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ll t,k,x,ans;
  cin>>t;
  while(t--){
    cin>>k>>x;
    ans=x;
    for(ll i=1; i<k; i++){
      ans+=9;
    }

    cout<<ans<<endl;
  }

  return 0;
}
