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

bool vis[35];

signed main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

	vector<int>v;
	int j=1;
	for(int i=1; i<=30; i++){
		v.pb(j);
		j*=2;
	}
	int sz = v.size();

    int t;
    cin>>t;
    while(t--){
    	clr(vis);
    	int n,k;
    	cin>>n>>k;
    	if(k==0){
    		cout << "-1\n";
    		continue;
    	}
    	if(k==1){
    		cout << "1\n";
    		continue;
    	}

    	k--;
    	int ans=1;

    	while(k>0 && ans<n){
    		for(int i=sz-1; i>=0; i--){
    			if(ans+v[i]<n && vis[i]==0){
    				ans += v[i];
    				vis[i] = 1;
    				break;
    			}
    		}
    		k--;
    	}

    	cout << ans << "\n";

    }

    return 0;
}