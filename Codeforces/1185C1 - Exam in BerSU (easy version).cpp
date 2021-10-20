#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,i,j,p,s=0;
    int a[105];

    cin>>n>>m;

    for(i=0; i<n; i++)cin>>a[i];

    for(i=0; i<n; i++){
        s += a[i];
        sort(a,a+i);
        for(j=i,p=s; p>m; ){
            p -= a[--j];
        }
        printf("%d ", i-j);
    }

    return 0;
}