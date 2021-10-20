#include<bits/stdc++.h>
using namespace std;
#define ll long long
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

// ll dx[] = { -1 , 0 , 1 , 0};
// ll dy[] = {0 , 1 , 0 , -1};

// //for chess knight move
// ll dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// ll dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	fastio

    ll t;
    cin>>t; 
    while(t--){
        ll n,ans=0;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0; i<n; i++){
            if(i%2==0){
                if(v[i]%2==0) ans += v[i];
            }
            else{
                if(v[i]%2==1) ans -= v[i];
            }
        }

        if(ans == 0)
        cout << "Tie\n";
        else if(ans>0)
        cout << "Alice\n";
        else
        cout << "Bob\n";
    }

	return 0;
}