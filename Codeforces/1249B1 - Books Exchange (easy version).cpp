#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,pos,ans;
    int a[205];

    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        for(int i=1; i<=n; i++){
            pos = a[i];
            ans = 1;
            while(pos!=i){
                ans++;
                pos = a[pos];
            }
            cout<<ans<<" ";
        }
        cout<<"\n";
    }

    return 0;
}