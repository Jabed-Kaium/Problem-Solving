#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,x1,y1,x2,y2;
    cin>>t;
    while(t--){
        cin>>x1>>y1>>x2>>y2;
        cout<<(y2-y1)*(x2-x1)+1<<"\n";
    }

    return 0;
}