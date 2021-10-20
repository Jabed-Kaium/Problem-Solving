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

    vector<int> v;

    for(int i=1; i<=10000; i++){
        v.pb(i*i*i);
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag = false;
        int len = v.size();
        for(int i=0; i<len && v[i]<n; i++){
            int tmp = n - v[i];
            int tmp2 = cbrt(tmp);
            if(tmp2*tmp2*tmp2 == tmp){
                flag = true;
                break;
            }
        }

        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}