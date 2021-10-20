#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int l,r,d,u;
        cin>>l>>r>>d>>u;
        int x,y,xl,xr,yd,yu;
        cin>>x>>y>>xl>>yd>>xr>>yu;

        bool flag = 1;

        if(r-l > xr-x || l-r > x-xl)
        flag = 0;

        if(u-d > yu-y || d-u > y-yd)
        flag = 0;

        if(xl==xr && r+l>0)
        flag = 0;

        if(yd==yu && u+d>0)
        flag = 0;

        if(flag)cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}