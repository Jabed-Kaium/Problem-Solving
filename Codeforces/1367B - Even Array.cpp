#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[50];
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++)cin>>a[i];
        int odd=0,even=0;

        for(int i=0; i<n; i+=2){
            if(a[i]%2!=0)even++;
        }

        for(int i=1; i<n; i+=2){
            if(a[i]%2==0)odd++;
        }

        if(odd == even)cout << odd << "\n";
        else cout << "-1\n";
    }
    
    return 0;
}