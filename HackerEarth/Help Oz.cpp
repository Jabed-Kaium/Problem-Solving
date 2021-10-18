#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int m,i,j,max=-1;
  scanf("%d", &m);
  int arr[m];
  for(i=0; i<m; i++){
    scanf("%d", &arr[i]);
    if(arr[i]>max)max=arr[i];
  }
  for(i=2; i<=max/2; i++){
    j=1;
    while(arr[0]%i==arr[j]%i && j<m){
      j++;
    }
    if(j==m)printf("%d ", i);
  }

  return 0;
}
