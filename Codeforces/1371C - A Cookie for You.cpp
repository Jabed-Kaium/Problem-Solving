#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,a,b,n,m;

    cin>>t;

    while(t--){
        cin>>a>>b>>n>>m;

        if((a+b >= n+m) && min(a,b) >= m){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }

    return 0;
}