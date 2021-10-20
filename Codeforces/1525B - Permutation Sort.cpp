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
        int n,mn = INT_MAX,id = -1;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]<mn){
                mn = v[i];
                id = i;
            }
        }

        vector<int> tmp;
        tmp = v;

        sort(tmp.begin(),tmp.end());

        if(tmp == v){
            cout << 0 << "\n";
            continue;
        }
        if(id == 0){
            cout << 1 << "\n";
            continue;
        }
        if(id>0 && id<n-1){
            int c = 1;
            sort(v.begin(),v.begin()+(n-1));
            if(tmp != v){
                c++;
            }
            cout << c << "\n";
            continue;
        }
        if(id == n-1){
            int c = 2;
            sort(v.begin()+1, v.end());
            sort(v.begin(), v.begin()+(n-1));
            if(tmp != v)
                c++;

            cout << c << "\n";
            continue;
        }
    }

    return 0;
}