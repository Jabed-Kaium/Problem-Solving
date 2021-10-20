#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int x = k/(n-1);
        if((k+x)%n==0){
            cout<<k+x-1<<"\n";
        }
        else{
            cout<<k+x<<"\n";
        }
    }
    
    return 0;
}