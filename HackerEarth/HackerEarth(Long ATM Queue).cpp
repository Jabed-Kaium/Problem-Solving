#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000005
int main()
{
  vector<ll> a;
  ll n,m,i,j;
  ll c=1;
  cin>>n;
  for(i=0; i<n; i++){
    if(i==0){
      cin>>m;
      a.push_back(m);
    }
    else{
      cin>>m;
      a.push_back(m);
      if(a[i]<a[i-1])c++;
    }
  }

  cout<<c<<endl;

  return 0;
}
