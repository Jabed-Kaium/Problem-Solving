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
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int t;
    cin>>t;
    while(t--){
        bool flag = false;
        int gcd,lcm;
        cin>>gcd>>lcm;

        if(gcd == lcm){
            cout << gcd << " " << lcm << "\n";
            continue;
        }

        vector<int> factors;
        vector<int> final;

        for(int i=1; i*i<=lcm; i++){
            int f = i;
            int s = lcm/i;
            if(f!=s){
                factors.pb(f);
                factors.pb(s);
            }
            else{
                factors.pb(f);
            }
        }

        int sz = factors.size();

        for(int i=0; i<sz; i++){
            if(factors[i]%gcd==0)
                final.pb(factors[i]);
        }

        sort(final.begin(), final.end());
        int size = final.size();

        for(int i=0; i<size-1 && !flag; i++){
            for(int j=i+1; j<size && !flag; j++){
                if(final[i]*final[j] == gcd*lcm){
                    cout << final[i] << " " << final[j] << "\n";
                    flag = true;
                }
            }
        }

        if(!flag){
            cout << "-1\n";
        }
    }

    return 0;
}