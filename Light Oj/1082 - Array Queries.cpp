#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100005
ll arr[mx];
ll tree[mx*4];
#define MAX 10000000;

void init(ll node,ll b,ll e)
{
  if(b==e){ //if it is leaf node(i.e [1,1],[2,2])
    tree[node]=arr[b];
    return;
  }
  ll left = node*2;
  ll right = node*2 + 1;
  ll mid = (b+e)/2;
  init(left,b,mid);
  init(right,mid+1,e);
  tree[left]<tree[right] ? tree[node]=tree[left] : tree[node]=tree[right]; // making node by comparing which is minimum value
}

ll query(ll node,ll b,ll e,ll i,ll j)
{
  if(i>e || j<b) // if the range is outside of the given range
    return MAX;
  if(b>=i && e<=j){ // if the range is inside of the given range
    return tree[node];
  }
  //if the range is intersecting the given range,then traversing continues by these procedure
  ll left = node*2;
  ll right = node*2 + 1;
  ll mid = (b+e)/2;
  ll p1 = query(left,b,mid,i,j);
  ll p2 = query(right,mid+1,e,i,j);
  return p1<p2 ? p1 : p2; // returning minimum to previous node
}
/*
void update(int node,int b,int e,int i,int newvalue)
{
  if(i>e || i<b) // if the range is outside of the given index i
    return;
  if(b>=i && e<=i){ // if the range is matched with the given index i
    tree[node] = newvalue;
    return;
  }
  //if the range is intersecting the given index i,then traversing continues by these procedure
  int left = node*2;
  int right = node*2 + 1;
  int mid = (b+e)/2;
  update(left,b,mid,i,newvalue);
  update(right,mid+1,e,i,newvalue);
  tree[left]<tree[right] ? tree[node]=tree[left] : tree[node]=tree[right]; // updating nodes as the index i updated
}
*/
int main()
{
  ll t;
  scanf("%lld", &t);
  ll n,q,i,j,k,a,b;
  for(i=1; i<=t; i++){
    scanf("%lld %lld", &n,&q);
    for(j=1; j<=n; j++){
      scanf("%lld", &arr[j]);
    }
    init(1,1,n);
    printf("Case %lld:\n", i);
    for(k=1; k<=q; k++){
      scanf("%lld %lld", &a,&b);
      printf("%lld\n", query(1,1,n,a,b));
    }
}
  return 0;
}
