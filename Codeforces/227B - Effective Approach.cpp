#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll hashtable[100005];
    ll n,q,vasya=0,petya=0,x,y;

    scanf("%I64d", &n);
    for(int i=1; i<=n; i++){
        scanf("%I64d", &x);
        hashtable[x]=i;
    }
    cin>>q;
    for(int i=0; i<q; i++){
        scanf("%I64d", &y);
        vasya += hashtable[y];
        petya += n-hashtable[y]+1;
    }

    printf("%I64d %I64d\n", vasya,petya);
    
    return 0;
}