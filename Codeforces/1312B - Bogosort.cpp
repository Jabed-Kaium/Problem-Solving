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
    int a[105];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=n-1; i>=0; i--){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}