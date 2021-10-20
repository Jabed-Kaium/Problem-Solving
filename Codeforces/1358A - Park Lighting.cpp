#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans = a*b;
        if(ans%2==0){
            cout<<ans/2<<"\n";
        }
        else{
            cout<<ans/2+1<<"\n";
        }
    }

    return 0;
}