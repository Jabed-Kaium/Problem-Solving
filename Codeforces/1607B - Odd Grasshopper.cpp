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
        int k,n;
        cin>>k>>n;
        int ans = k;
        if(n == 0){
            cout << k << "\n";
            continue;
        }
        n--;
        int tmp = n/4;
        int tot = tmp*4;
        n++;
        if(k%2==0){
            ans += (tmp*(-4));
            if(tot+2 <= n)
                ans += (tot+2);
            if(tot+3 <= n)
                ans += (tot+3);
            if(tot+4 <= n)
                ans -= (tot+4);

            ans--;
        }
        else{
            ans += (tmp*4);
            if(tot+2 <= n)
                ans -= (tot+2);
            if(tot+3 <= n)
                ans -= (tot+3);
            if(tot+4 <= n)
                ans += (tot+4);

            ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}