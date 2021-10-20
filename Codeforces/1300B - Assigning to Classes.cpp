#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    int a[200005];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<2*n; i++){
            cin>>a[i];
        }
        sort(a,a+(2*n));
        cout<<a[n]-a[n-1]<<"\n";
    }

    return 0;
}