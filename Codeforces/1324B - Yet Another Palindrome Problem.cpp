#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        int a[5005];
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        bool flag = 0;
        for(int i=0; i<n && flag==0; i++){
            for(int j=n-1; j>i; j--){
                if(a[i]==a[j]){
                    if(j-i >= 2)flag=1;
                    break;
                }
            }
        }
        if(flag)cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}