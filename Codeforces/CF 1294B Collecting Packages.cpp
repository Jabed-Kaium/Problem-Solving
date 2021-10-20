#include<bits/stdc++.h>
using namespace std;
int t,i,n,a,b,x,y,flag;
pair<int,int>p[10005];
string s;
int main()
{

  cin>>t;
  while(t--){
    s.clear();
    flag=0,x=0,y=0;
    cin>>n;
    for(i=0; i<n; i++){
      cin>>a>>b;
      p[i].first = a;
      p[i].second = b;
    }
    sort(p,p+n);
    for(i=0; i<n; i++){
      while(x!=p[i].first){
        s += 'R';
        x++;
      }
      if(y>p[i].second){
        flag=1;
        break;
      }
      while(y!=p[i].second){
        s += 'U';
        y++;
      }
    }
    if(flag==1)cout<<"NO"<<"\n";
    else{
      cout<<"YES"<<"\n";
      cout<<s<<"\n";
    }
  }

  return 0;
}
