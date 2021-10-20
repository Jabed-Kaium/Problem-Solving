#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int mini = min(a,b);
        int maxi = max(a,b);

        if(mini*2 >= maxi){
            mini *= 2;
            cout<<mini*mini<<"\n";
        }
        else{
            cout<<maxi*maxi<<"\n";
        }
    }

    return 0;
}