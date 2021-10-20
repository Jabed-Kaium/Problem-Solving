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

    ll x,y;
    ll t,a,b,c;
    
    cin>>t;
    while(t--){
        cin>>a>>b>>c;

        if(a<c)x=1;
        else x=-1;

        if(a*b > c)y=b;
        else y = -1;

        cout<<x<<" "<<y<<"\n";
    }

    return 0;
}