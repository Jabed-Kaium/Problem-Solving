#include<bits/stdc++.h>
using namespace std;

int a[105];

int main()
{
  int t,n,k,x;
  cin>>t;
  while(t--){
    set<int>s;
    set<int>::iterator it;
    vector<int>v;
    cin>>n>>k;
    for(int i=0; i<=n; i++)a[i]=0;
    for(int i=0; i<n; i++){
      cin>>x;
      a[x]++;
      s.insert(x);
    }
    if(s.size()>k){
      cout<<"-1\n";
      continue;
    }
    else if(s.size()==k){
      for(it=s.begin(); it!=s.end(); it++){
        v.push_back(*it);
      }
    }
    else if(s.size()<k){
      for(it=s.begin(); it!=s.end(); it++){
        v.push_back(*it);
      }
      for(int i=1; i<=n && v.size()<k; i++){
        if(a[i]==0){
          v.push_back(i);
        }
      }
    }

    cout<<n*v.size()<<"\n";
    for(int i=0; i<n; i++){
      for(int j=0; j<v.size(); j++){
        cout<<v[j]<<" ";
      }
    }
    cout<<"\n";

  }

  return 0;
}