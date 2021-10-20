#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,i,a,b,cnt=0;
    cin>>n>>m;
    if(n>m){
        for(i = n; i>=0; i--){
            b = i;
            a = sqrt(n-b);
            if(a*a+b==n &&  a+b*b==m)cnt++;
        }
    }
    else{
        for(i = m; i>=0; i--){
            a = i;
            b = sqrt(m-a);
            if(a*a+b==n &&  a+b*b==m)cnt++;
        }
    }
    cout<<cnt<<"\n";

    return 0;
}