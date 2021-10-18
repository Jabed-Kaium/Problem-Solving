#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000002
ll mark[1000002];
vector<ll>v;

void sieve(ll n)
{
  ll i,j,limit = sqrt(n*1.0)+2;
  mark[0]=1;
  mark[1]=1;
  for(i=4; i<=n; i+=2)mark[i]=1;
  for(i=3; i<=limit; i+=2){
    if(!mark[i]){
        for(j=i*i; j<=n; j += 2*i){
          mark[j] = 1;
        }
      }
    }
}

int main()
{
  sieve(1000000);

  ll n,x,i,j,k,left,right;
  cin>>n;
  for(i=1; i<=n; i++){
    cin>>x;
    if(mark[x]==0)v.push_back(i);
  }
  if(v.size()==0){
    for(i=1; i<=n; i++)cout<<-1<<" ";
    cout<<"\n";
  }
  else{
    left=v[0];
    right=v[v.size()-1];
    k=1;
    for(i=1; i<=left; i++){
      cout<<left<<" ";
    }
    for(i=left+1; i<=right; i++){
      if(i>v[k])k++;

      if(abs(i-v[k-1])<=abs(i-v[k])){
        cout<<v[k-1]<<" ";
      }
      else{
        cout<<v[k]<<" ";
      }
    }
    for(i=right+1; i<=n; i++){
      cout<<right<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
