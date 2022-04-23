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

char ch[] = {'0','1','2','3','4','5','6','7','8','9'};

bool mark[4000];

signed main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    clr(mark);
    for(int i=6; i<4000; i+=7)
        mark[i] = 1;
    for(int i=7; i<4000; i+=7)
        mark[i] = 1;

    int t;
    cin>>t;
    while(t--){
        set<int> s;
        int n;
        cin>>n;
        int p;
        cin>>p;
        while(p--){
            int c;
            cin>>c;
            for(int i=c; i<=n; i+=c){
                if(!mark[i]){
                    s.insert(i);
                }
            }
        }

        cout << s.size() << "\n";
    }

    return 0;
}