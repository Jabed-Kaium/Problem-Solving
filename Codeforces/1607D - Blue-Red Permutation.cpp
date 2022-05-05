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
        vector<int> v(n+1);
        vector<char> c(n+1);
        for(int i=1; i<=n; i++){
            cin>>v[i];
        }
        for(int i=1; i<=n; i++){
            cin>>c[i];
        }
        bool f = false;
        for(int i=1; i<=n; i++){
            if(c[i] == 'B' && v[i] <= 0){
                cout << "NO\n";
                f = true;
                break;
            }
        }
        if(f)
            continue;
        vector<int> neg,posB,posR;
        for(int i=1; i<=n; i++){
            if(v[i] <= 0){
                neg.pb(v[i]);
            }
            else if(c[i] == 'B'){
                posB.pb(v[i]);
            }
            else{
                posR.pb(v[i]);
            }
        }
        sort(posB.begin(), posB.end());
        sort(posR.begin(), posR.end());
        bool flag = false;
        for(int i=n; i>=1; i--){
            if(!posR.empty() && posR.back() > i){
                cout << "NO\n";
                flag = true;
                break;
            }
            if(!posR.empty() && posR.back() <= i){
                posR.pop_back();
                continue;
            }
            if(!posB.empty() && posB.back() >= i){
                posB.pop_back();
                continue;
            }
            if(!neg.empty()){
                neg.pop_back();
                continue;
            }
            if(!posB.empty() && posB.back() < i){
                cout << "NO\n";
                flag = true;
                break;
            }
        }

        if(!flag){
            if(!posR.empty() || !posB.empty() || !neg.empty()){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
            }
        }

    }

    return 0;
}