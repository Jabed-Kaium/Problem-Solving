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
    
    int n,m,p,ans = 0;
    cin>>n>>m>>p;
    vector<int> v(m+1);

    for(int i=0; i<=m; i++){
        cin>>v[i];
    }

    for(int i=0; i<m; i++){
        int temp = v[i]^v[m];
        int cnt = __builtin_popcount(temp);
        if(cnt <= p)ans++;
    }

    cout << ans << "\n";

    return 0;
}