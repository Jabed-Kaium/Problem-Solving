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

int n;
bool f = false;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++){
            int l=i, r=n-1;
            while(l<=r){
                a[l] = a[r] = a[l]&a[r];
                l++, r--;
            }
        }
        for(int i=n-1; i>=0; i--){
            int l=i, r=0;
            while(r<=l){
                a[l] = a[r] = a[l]&a[r];
                l--, r++;
            }
        }
        
        int mx = INT_MIN;
        for(int i=0; i<n; i++){
            mx = max(mx,a[i]);
        }
        cout << mx << "\n";
    }

    return 0;
}