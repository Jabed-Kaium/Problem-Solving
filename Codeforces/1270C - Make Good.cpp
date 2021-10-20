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

    ll t;
    cin>>t;
    while(t--){
        ll sum=0;
        ll xor_value=0;
        ll n;

        cin>>n;

        ll a[n+2];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            sum += a[i];
            xor_value ^= a[i];
        }

        printf("2\n");
        printf("%lld %lld\n", xor_value, xor_value + sum);
    }

    return 0;
}