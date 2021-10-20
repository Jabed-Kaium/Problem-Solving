#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    int a[200005];

    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int groups=0;
        for(int i=0; i<n; ){
            int x=1;
            while(x<a[i] && i<n-1){
                x++;
                i++;
            }
            if(x >= a[i]){
                groups++;
            }
            i++;
        }

        cout<<groups<<"\n";
    }    

    return 0;
}