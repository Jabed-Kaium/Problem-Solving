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

    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;

        cout << (n-1)/2 + 1 << "\n";
    }

    return 0;
}