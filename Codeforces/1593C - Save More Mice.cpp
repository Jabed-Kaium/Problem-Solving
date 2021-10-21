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

    fastio

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int x;
        map<int,int> m;
        map<int,int>::iterator it;
        for(int i=0; i<k; i++){
            cin>>x;
            m[x]++;
        }
        stack< pair<int,int> > st;
        for(it = m.begin(); it!=m.end(); it++){
            st.push({it->ff, it->ss});
        }
        int ans=0, steps = 0;
        while(steps < n-1 && !st.empty()){
            pair<int,int> p = st.top();
            st.pop();
            if(steps >= p.ff)
                break;
            while((n-p.ff)*p.ss > (n-1)-steps){
                p.ss--;
            }
            ans += p.ss;
            steps += ((n-p.ff)*p.ss);
        }

        cout << ans << "\n";
    }

    return 0;
}