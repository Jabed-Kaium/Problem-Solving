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

int bigmod(int a, int n, int p) {
    int res = 1;
    while (n) {
        if (n % 2 != 0) {
            res = (res * a) % p;
            n--;
        }
        else {
            a = (a * a) % p;
            n /= 2;
        }
    }
    return res;
}


signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin>>t;
    while(t--){
        int n,k;
        bitset <65> bs;
        cin>>n>>k;
        bs = k;
        int ans = 0;
        for(int i=0; i<65; i++){
            if(bs[i]){
                ans += bigmod(n,i,mod);
                ans %= mod;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}