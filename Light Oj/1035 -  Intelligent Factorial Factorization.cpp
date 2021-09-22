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

int ans[105];

void factor(int n){
    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            ans[i]++;
            n /= i;
        }
    }
    if(n>1)ans[n]++;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fastio

    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        for(int i=0; i<105; i++)ans[i] = 0;
        int n;
        cin>>n;
        for(int i=2; i<=n; i++){
            factor(i);
        }
        cout << "Case " << tc << ": " << n << " = ";
        int i;
        for(i=2; i<=n; i++){
            if(ans[i]>0){
                cout << i << " (" << ans[i] << ")";
                break;
            }
        }
        i++;
        for( ; i<=n; i++){
            if(ans[i]>0){
                cout << " * " << i << " (" << ans[i] << ")";
            }
        }
        cout << "\n";
    }

    return 0;
}