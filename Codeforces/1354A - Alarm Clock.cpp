#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,a,b,c,d,i;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(b>=a){
            cout<<b<<"\n";
            continue;
        }
        if(d>=c){
            cout<<"-1"<<"\n";
            continue;
        }

        ll temp = a-b , temp2 = c-d;
        ll div = temp/temp2;
        if(div*temp2 < temp)div++;

        cout<< b + div*c <<"\n"; 
    }

    return 0;
}