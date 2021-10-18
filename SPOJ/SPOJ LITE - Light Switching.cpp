#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100005
ll toggle[mx*4];
ll on[mx*4];

void propagate(ll at,ll L,ll R)
{
  ll mid = (L+R)/2;
  ll left_at = at*2, left_L = L, left_R = mid;
  ll right_at = at*2+1, right_L = mid+1, right_R = R;

  toggle[at] = 0;
  toggle[left_at] ^= 1;
  toggle[right_at] ^= 1;

  on[left_at] = left_R - left_L + 1 - on[left_at];
  on[right_at] = right_R - right_L + 1 - on[right_at];
}

void update(ll at,ll L,ll R,ll l,ll r)
{
  if(r<L || R<l)return;
  if(l<=L && R<=r){
    toggle[at] ^= 1;
    on[at] = R-L+1 - on[at];
    return;
  }
  if(toggle[at])propagate(at,L,R); //if the node is on then drop the on situation to its child nodes

  ll mid = (L+R)/2;

  update(at*2,L,mid,l,r);
  update(at*2+1,mid+1,R,l,r);

  on[at] = on[at*2] + on[at*2+1];
}

int query(ll at,ll L,ll R,ll l,ll r)
{
  if(r<L || R<l)return 0;
  if(l<=L && R<=r) return on[at];

  if(toggle[at])propagate(at,L,R); //if the node is on then drop the on situation to its child nodes

  ll mid = (L+R)/2;
  ll x = query(at*2,L,mid,l,r);
  ll y = query(at*2+1,mid+1,R,l,r);

  return x+y;
}

int main()
{
    ll n,m,x,p,q;
    cin>>n>>m;
    while (m--){
    cin>>x;
    if(x==0){
    cin>>p>>q;
    update(1,1,n,p,q);
  }
    else if(x==1){
    cin>>p>>q;
    cout<<query(1,1,n,p,q)<<"\n";
    }
  }
  return 0;
}
