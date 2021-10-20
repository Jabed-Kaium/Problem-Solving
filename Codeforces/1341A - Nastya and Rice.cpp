#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,a,b,c,d;

    cin>>t;

    while(t--){
        cin>>n>>a>>b>>c>>d;

        int ans = a-b;
        int ans1 = a+b;
        if(ans*n>c+d || ans1*n<c-d)cout<<"No\n";
        else cout<<"Yes\n";
    }

    return 0;
}