#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[100005];
int seat[100005];
int main()
{
  int n,m,k,i,j;
  cin>>n>>m>>k;
  for(i=0; i<n; i++){
    cin>>arr[i];
  }
  int sum=0;
  set <int> s;
  set <int>::iterator it;
  for(i=1; i<=m; i++)s.insert(i);
  for(i=0; i<n; i++){
    if(s.empty()){
      sum += (n-i);
      break;
    }
    it = s.lower_bound(arr[i]);
    if(it==s.end()){
      it = s.begin();
    }
    if(*it!=arr[i]){
      sum += 1;
    }
    seat[*it]++;
    if(seat[*it]==k)s.erase(it);
  }
  cout<<sum<<endl;

  return 0;
}
