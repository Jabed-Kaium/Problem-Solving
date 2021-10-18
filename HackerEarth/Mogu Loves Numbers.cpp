#include<bits/stdc++.h>
using namespace std;
#define max 1000000

int mark[1000002];
int tree[4000002];

void build(int at,int L,int R)
{
  tree[at]=0;
  if(L==R){
    tree[at]=mark[L];
    return;
  }
  int mid = (L+R)/2;
  build(at*2,L,mid);
  build(at*2+1,mid+1,R);
  //do initialization like,if there was num:
  tree[at] = tree[at*2] + tree[at*2+1];
}

int query(int at,int L,int R,int l,int r)
{
  if(r<L || R<l)return 0;
  if(l<=L && R<=r)return tree[at];

  int mid=(L+R)/2;
  int x = query(at*2,L,mid,l,r);
  int y = query(at*2+1,mid+1,R,l,r);

  return x+y;
}

void sieve(int n)
{
  int i,j,limit = sqrt(n*1.0)+2;
  for(i=0; i<=n; i++)mark[i]=1;
  mark[0]=0;
  mark[1]=0;
  for(i=4; i<=n; i+=2)mark[i]=0;

  for(i=3; i<=limit; i+=2){
    if(mark[i]){
        for(j=i*i; j<=n; j += 2*i){
          mark[j] = 0;
      }
    }
  }
}

int main()
{
  sieve(1000000);
  int q,l,r;
  build(1,1,max);
  scanf("%d", &q);
  while(q--){
    scanf("%d %d", &l,&r);
    if(l>r)swap(l,r);
    int ans = query(1,1,max,l,r);
    printf("%d\n", ans);
  }

  return 0;
}
