#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int MAX = 55;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[MAX];
    int f[2];
    int t,n;
    cin>>t;
    while(t--){
        f[0]=0,f[1]=0;
        for(int i=0; i<MAX; i++)a[i]=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
            f[a[i]%2]++;
        }
        if(f[0]%2 != f[1]%2){
            cout<<"NO\n";
            continue;
        }
        if(f[0]%2==0 && f[1]%2==0){
            cout<<"YES\n";
            continue;
        }
        sort(a,a+n);
        for(int i=0; i<n; i++){
            if(a[i]+1 == a[i+1]){
                f[0] -= 1;
                f[1] -= 1;
                break;
            }
        }
        if(f[0]%2==0 && f[1]%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}