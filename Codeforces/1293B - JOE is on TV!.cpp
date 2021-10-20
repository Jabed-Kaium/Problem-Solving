#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    double ans=0;
    cin>>n;
    while(n>0){
        ans += (1*1.0 / n);
        n--;
    }

    cout<<ans<<"\n";

    return 0;
}