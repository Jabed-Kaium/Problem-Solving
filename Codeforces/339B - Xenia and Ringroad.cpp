#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1000005];

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,sum=0;

    cin>>n>>m;
    
    for(ll i=1; i<=m; i++){
        cin>>arr[i];
    }

    for(ll i=1; i<=m; i++){
        if(i==1){
            sum += (arr[i]-1);
            continue;
        }

        if(arr[i]>=arr[i-1]){
            sum += (arr[i]-arr[i-1]);
        }
        else{
            sum += (n-arr[i-1]+1);
            sum += (arr[i]-1);
        }
    }

    cout<<sum<<"\n";

    return 0;
}