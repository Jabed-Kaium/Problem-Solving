#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,k;
  int a[100005];
  cin>>t;
  while(t--){
    cin>>n>>k;
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    sort(a,a+n);
    int res=0;
    int min=a[0];
    while(min<k){
      min++;
      res++;
    }
    cout<<res<<endl;
  }

  return 0;
}
