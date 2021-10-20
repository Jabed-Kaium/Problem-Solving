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

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char s[n+1][m+1];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>s[i][j];
            }
        }

        int ans = 0;

        for(int i = 0; i<m-1; i++){
            if(s[n-1][i] == 'D')ans++;
        }
        for(int i=0; i<n-1; i++){
            if(s[i][m-1] == 'R')ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}