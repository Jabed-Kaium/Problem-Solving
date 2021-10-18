#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n,q,i,j,p,x,a,b;
  vector <ll> v;
  vector <ll>::iterator it;
  cin>>n;
  for(i=0; i<n; i++){
    cin>>x;
    v.push_back(x);
  }
  sort(v.begin(),v.end());
  cin>>q;
  while(q--){
    cin>>a>>b;
    if(a==0){
      it = lower_bound(v.begin(),v.end(),b);
      cout<<v.size()-distance(v.begin(),it)<<endl;
    }
    else if(a==1){
      it = upper_bound(v.begin(),v.end(),b);
      cout<<v.size()-distance(v.begin(),it)<<endl;
    }
  }

  return 0;
}
