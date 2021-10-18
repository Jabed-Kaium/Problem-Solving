#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100005

ll arr[mx];

struct info{
  ll prop,sum;
} tree[mx*4]; // a tree of struct info type(actually an array of structure)

/*void init(ll node,ll b,ll e)
{
  if(b==e){
    tree[node].sum = arr[b]; //storing the leaf value in segment tree
    return;
  }
  //traversing the tree
  ll left = node*2;
  ll right = node*2 + 1;
  ll mid = (b+e)/2;
  init(left,b,mid);
  init(right,mid+1,e);
  tree[node].sum = tree[left].sum + tree[right].sum;
}

void new_update(ll node,ll b,ll e,ll i,ll j,ll x)
{
  if(i>e || j<b){
    return; //if the range is out of the given range
  }
  if(b>=i && e<=j){ // if the desired node encountered
    tree[node].sum = ((e-b+1)*x); //sum is the sum of all lower nodes updated with x
    tree[node].prop = x; // x is the value by which we update the array and it stored as sum with previous x
    return;
  }
  ll left = node*2;
  ll right = node*2 + 1;
  ll mid = (b+e)/2;
  new_update(left,b,mid,i,j,x);
  new_update(right,mid+1,e,i,j,x);
  tree[node].sum = tree[left].sum + tree[right].sum + (e-b+1)*tree[node].prop;
}*/

void update(ll node,ll b,ll e,ll i,ll j,ll x)
{
  if(i>e || j<b){
    return; //if the range is out of the given range
  }
  if(b>=i && e<=j){ // if the desired node encountered
    tree[node].sum += ((e-b+1)*x); //sum is the sum of all lower nodes updated with x
    tree[node].prop += x; // x is the value by which we update the array and it stored as sum with previous x
    return;
  }
  ll left = node*2;
  ll right = node*2 + 1;
  ll mid = (b+e)/2;
  update(left,b,mid,i,j,x);
  update(right,mid+1,e,i,j,x);
  tree[node].sum = tree[left].sum + tree[right].sum + (e-b+1)*tree[node].prop;
}

ll query(ll node,ll b,ll e,ll i,ll j,ll carry = 0)
{
  if(i>e || j<b){
    return 0;
  }
  if(b>=i && e<=j){
    return tree[node].sum + carry*(e-b+1);
  }
  ll left = node<<1; // means node*2
  ll right = (node<<1) + 1;
  ll mid = (b+e)>>1; //means (b+e)/2
  ll p1 = query(left,b,mid,i,j,carry+tree[node].prop);
  ll p2 = query(right,mid+1,e,i,j,carry+tree[node].prop);
  return p1+p2;
}

int main()
{
  ll t,n,m,i,j,p,q,v,x;

  scanf("%lld", &t);
  while(t--){
    scanf("%lld %lld", &n,&m);
    while(m--){
      scanf("%lld", &x);
      if(x==0){
        scanf("%lld %lld %lld", &p,&q,&v);
        update(1,1,n,p,q,v);
      }
      else if(x==1){
        scanf("%lld %lld", &p,&q);
        printf("%lld\n", query(1,1,n,p,q));
      }
    }
    memset(tree,0,sizeof(tree));
  }
  return 0;
}
