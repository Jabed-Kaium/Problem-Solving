#include<bits/stdc++.h>
using namespace std;
#define ll long long

int f[2];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x,t,n,k;
    cin>>t;
    while(t--){
        f[0]=0,f[1]=0;  //f[0] holds count of evens,f[1] holds count of odds
        cin>>n>>k;
        for(int i=0; i<n; i++){
            cin>>x;
            f[x%2]++;
        }
        bool flag = 0;
        for(int i=1; i<=f[1] && i<=k; i+=2){
            int need = k-i;
            if(need<=f[0])flag=1;
        }
        if(flag)cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}