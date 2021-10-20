#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[2005];
  int t,n,i,j,cnt;
  cin>>t;
  while(t--){
    cin>>n;
    cnt=0;
    for(i=0; i<n; i++){
      cin>>arr[i];
      if(arr[i]%2!=0)cnt++;
    }
    if(cnt%2!=0){
      cout<<"YES"<<"\n";
    }
    else if(cnt==0){
      cout<<"NO"<<"\n";
    }
    else if(cnt==n){
      cout<<"NO"<<"\n";
    }
    else{
      cout<<"YES"<<"\n";
    }
  }

  return 0;
}
