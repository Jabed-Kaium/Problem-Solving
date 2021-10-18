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

vector<char>ans;
bool vis[105];
string s;
int r,len;

void print()
{
    for(auto x : ans)
        cout << x;
    cout << "\n";
}

void solve()
{
    if(ans.size() == r){
        print();
        return;
    }

    for(int i=0; i<len; i++){
        if(!ans.empty() && ans[ans.size()-1]>s[i])
            continue;
        if(!vis[i]){
            vis[i]=1;
            ans.pb(s[i]);
            solve();
            vis[i]=0;
            ans.pop_back();
            while(s[i] == s[i+1])
                i++;
        }
    }
}

signed main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    fastio

    while(cin>>s>>r){
        clr(vis);
        ans.clear();
        len = s.length();
        sort(s.begin(),s.end());

        solve();
    }   

    return 0;
}