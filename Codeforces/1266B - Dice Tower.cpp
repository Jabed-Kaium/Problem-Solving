#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n,t,d;
        cin>>n;
        t = n%14;
        d = n/14;
        if(t>=1 && t<=6 && d>=1)cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}