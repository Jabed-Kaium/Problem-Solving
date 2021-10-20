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
    
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; i++){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}