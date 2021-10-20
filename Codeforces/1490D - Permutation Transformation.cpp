#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define clr(a) memset(a,0,sizeof(a))
#define reset(a) memset(a,-1,sizeof(a))
#define mod 1000000007
#define pi acos(-1)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// for chess knight move
// ll dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// ll dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int n;
int a[105],dis[105];

void build(int l, int r, int d)
{
    if(l>r)return;
    int m=l;
    for(int i=l; i<=r; i++){
        if(a[i]>a[m])m=i;
    }

    dis[m] = d;

    build(m+1,r,d+1);
    build(l,m-1,d+1);
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio

    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>a[i];

        build(1,n,0);

        for(int i=1; i<=n; i++)
            cout << dis[i] << " ";
        cout << "\n";
    }   

    return 0;
}