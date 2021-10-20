#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define clr(a) memset(a,0,sizeof(a))
#define reset(a) memset(a,-1,sizeof(a))
#define mod 1000000007
#define pi acos(-1)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// for chess knight move
// ll dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// ll dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector <int> a(n) , b(m);
        bool mark[m] = {0};
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<m; i++)
            cin>>b[i];

        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());

        int id=0 , ans=0;

        for(int i=0; i<n; i++){
            if(id<=a[i]-1 && b[id]<b[a[i]-1] && mark[id]==0 && id<m){
                ans += b[id++];
            }
            else{
                ans += b[a[i]-1];
            }
        }

        cout << ans << "\n";
    }

    return 0;
}