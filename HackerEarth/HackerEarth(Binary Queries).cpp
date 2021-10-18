#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000005];
int main()
{
  ll n,q,m,x,l,r,i,j,k;
  cin>>n>>q;
  for(i=1; i<=n; i++)
  {
    cin>>a[i];
  }
  while(q--){
    cin>>m;
    if(m==1){
      cin>>x;
      if(a[x]==0)a[x]=1;
      else a[x]=0;
    }
    else if(m==0){
      cin>>l>>r;
      if(a[r]==1)cout<<"ODD"<<endl;
      else cout<<"EVEN"<<endl;
    }
  }

  return 0;
}
