#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  vector <long long> v;
  while(cin>>n){
    if(n<10)cout<<n<<endl;
    else{
    while(n!=0){
      v.push_back(n%9);
      n/=9;
    }
    reverse(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
      cout<<v[i];
    }
    cout<<endl;
    v.clear();
  }
  }
}
