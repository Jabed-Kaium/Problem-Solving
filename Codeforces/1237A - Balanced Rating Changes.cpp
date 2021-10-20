#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,x;
    int flag=1;
    cin>>t;
    while(t--){
        cin>>x;
        if(x%2==0){
            cout<<x/2<<"\n";
        }
        else{
            cout<<(x+flag)/2<<"\n";
            flag *= -1;
        }
    }

    return 0;
}