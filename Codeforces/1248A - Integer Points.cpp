#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,n,m;
    cin>>t;
    while(t--){
        ll a=0,b=0,c=0,d=0;
        ll x;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>x;
            if(x%2!=0)a++;
            else b++;
        }
        cin>>m;
        for(int i=0; i<m; i++){
            cin>>x;
            if(x%2!=0)c++;
            else d++;
        }
        cout<< a*c + b*d <<"\n";
    }

    return 0;
}