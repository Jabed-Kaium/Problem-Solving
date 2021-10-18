#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 500005
int arr[mx];
int tree[mx*4];

//call with build(1,1,n)
void build(int at,int L,int R)
{
  tree[at]=0;
  if(L==R){
    tree[at]=arr[L];
    return;
  }
  int mid = (L+R)/2;
  build(at*2,L,mid);
  build(at*2+1,mid+1,R);
  //do initialization like,if there was num:
  tree[at] = tree[at*2] + tree[at*2+1];
}

//call with update(1,1,n,pos,u)
void update(int at,int L,int R,int pos)
{
  if(L==R){
    arr[L]++;
    tree[at]++;
    return;
  }
  int mid=(L+R)/2;
  if(pos<=mid){
    update(at*2,L,mid,pos);
  }
  else{
    update(at*2+1,mid+1,R,pos);
  }

  tree[at] = tree[at*2] + tree[at*2+1];
}

void update2(int at,int L,int R,int pos)
{
  if(L==R){
    if(arr[L]==0)return;
    else{
    arr[L]--;
    tree[at]--;
    return;
  }
  }
  int mid=(L+R)/2;
  if(pos<=mid){
    update2(at*2,L,mid,pos);
  }
  else{
    update2(at*2+1,mid+1,R,pos);
  }

  tree[at] = tree[at*2] + tree[at*2+1];
}

//call with: query(1,1,n,l,r)
int query(int at,int L,int R,int l,int r)
{
  if(r<L || R<l)return 0;
  if(l<=L && R<=r)return tree[at];

  int mid=(L+R)/2;
  int x = query(at*2,L,mid,l,r);
  int y = query(at*2+1,mid+1,R,l,r);

  return x+y;
}

int main()
{
  int n,q,a,x,y;
  scanf("%d %d", &n,&q);
  while(q--){
    scanf("%d", &a);
    if(a==1){
      scanf("%d", &x);
      update(1,1,n,x);
    }
    else if(a==2){
      scanf("%d", &x);
      update2(1,1,n,x);
    }
    else if(a==3){
      scanf("%d %d", &x,&y);
      int ans = query(1,1,n,x,y);
      printf("%d\n", ans);
    }
  }

  return 0;
}
