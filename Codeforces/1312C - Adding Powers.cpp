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

    ll t,n,k,p;
    ll a[50];

    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0; i<n; i++)cin>>a[i];

        ll limit = 10e16;
        p=1;

        while(p<limit){
            p *= k;
        }
        if(p>limit){
            p /= k;
        }

        while(p!=0){
            for(int i=0; i<n; i++){
                if(a[i] >= p){
                    a[i] -= p;
                    break;
                }
            }
            p /= k;
        }

        bool checker = true;

        for(int i=0; i<n; i++){
            if(a[i] != 0){
                checker = false;
                break;
            }
        }

        if(checker){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}