#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,q,power;
  int a[10000+5];
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  cin>>q;
  while(q--){
    int sum=0,c=0;
    cin>>power;
    for(int i=0; i<n; i++){
      if(a[i]<=power){
        c++;
        sum+=a[i];
      }
    }
    cout<<c<<" "<<sum<<endl;
  }
  return 0;
}
