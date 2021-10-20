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

vector<int> ans;
pair<int,int> a[200005];
int pre[200005];
bool mark[200005];
int n;

void all_clear()
{
    ans.clear();
    clr(a);
    clr(pre);
    clr(mark);
}

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
        all_clear();

        cin>>n;

        for(int i=1; i<=n; i++){
            cin>>a[i].ff;
            a[i].ss = i;
        }

        sort(a,a+n+1);

        pre[1] = a[1].ff;
        for(int i=2; i<=n; i++){
            pre[i] = pre[i-1] + a[i].ff;
        }

        ans.pb(a[n].ss);

        mark[n] = 1;

        for(int i=n-1; i>=1; i--){
            if(pre[i]>=a[i+1].ff && mark[i+1] == 1){
                ans.pb(a[i].ss);
                mark[i] = 1;
            }
            else{
                break;
            }
        }
        sort(ans.begin(),ans.end());
        cout << ans.size() << "\n";
        for(auto p : ans){
            cout << p << " ";
        }
        cout << "\n";
    }

    return 0;
}