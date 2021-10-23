#include<bits/stdc++.h>
using namespace std;
#define int         long long
#define endl        "\n"
#define ff          first
#define ss          second
#define pb          push_back
#define mp          make_pair
#define yes         cout<<"YES\n"
#define no          cout<<"NO\n"
#define clr(a)      memset(a,0,sizeof(a))
#define reset(a)    memset(a,-1,sizeof(a))
#define mod         1000000007
#define pi          acos(-1)
#define fastio      ios_base::sync_with_stdio(false);cin.tie(NULL);

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// for chess knight move
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        if(a[0]==1){
            cout << n+1 << " ";
            for(int i=1; i<=n; i++)
                cout << i << " ";
            cout << "\n";
            continue;
        }
        if(a[n-1]==0){
            for(int i=1; i<=n; i++)
                cout << i << " ";
            cout << n+1 << " ";
            cout << "\n";
            continue;
        }
        int i;
        for(i=0; i<n-1; i++){
            if(a[i]==0 && a[i+1]==1)
                break;
        }
        for(int j=1; j<=i+1; j++)
            cout << j << " ";
        cout << n+1 << " ";
        for(int j=i+2; j<=n; j++)
            cout << j << " ";

        cout << "\n";
    }

    return 0;
}