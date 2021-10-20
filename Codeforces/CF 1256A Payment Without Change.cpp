#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int q;
  ll a,b,n,s,i,j;
  cin>>q;
  while(q--){
    //ll c=0;
    cin>>a>>b>>n>>s;
    ll k=s/n;
    if(k>a){
      s -= a*n;
    }
    else{
      s -= k*n;
    }
    if(s<=b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}
