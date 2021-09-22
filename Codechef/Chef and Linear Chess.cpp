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
    
    int t;
    cin>>t;
    while(t--){
        int val,n,k,ans = -1;
        cin>>n>>k;

        while(n--){
            cin>>val;
            if(k%val == 0){
                ans = max(ans,val);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}