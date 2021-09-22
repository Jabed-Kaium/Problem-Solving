#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,h,p;

    cin>>t;

    while(t--){
        cin>>h>>p;
        while(h>0 && p>0){
            h -= p;
            p /=2;
        }

        if(h <= 0){
            cout << "1\n";
        }
        else{
            cout << "0\n";
        }
    }

    return 0;
}