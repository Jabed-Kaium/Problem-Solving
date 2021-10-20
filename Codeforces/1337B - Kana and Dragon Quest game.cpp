#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,x,n,m;
    cin>>t;
    while(t--){
        cin>>x>>n>>m;
        if(m*10>=x){
            cout<<"YES\n";
            continue;
        }
        for(int i=1; i<=n; i++){
            x = (x/2) + 10;
        }
        for(int i=1; i<=m; i++){
            x = x-10;
        }

        if(x<=0)cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}