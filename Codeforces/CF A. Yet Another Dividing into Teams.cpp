#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t,n,x,i,j,k;
  vector <int> l;
  cin>>t;
  while(t--){
    int c=1;
    cin>>n;
    for(i=0; i<n; i++){
      cin>>x;
      l.push_back(x);
    }
    for(i=0; i<n; i++){
      for(j=i+1; j<n; j++){
        if((l[i]-l[j])==1 || (l[j]-l[i]==1)){
          c=0;
          break;
        }
      }
      if(c==0)break;
    }
    if(c==0){
      cout<<"2"<<endl;
    }
    else{
      cout<<"1"<<endl;
    }
    l.clear();
  }

  return 0;
}
