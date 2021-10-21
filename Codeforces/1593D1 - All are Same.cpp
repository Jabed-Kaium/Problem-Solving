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
    	int n;
    	int mn = INT_MAX;
    	vector<int> v;
    	cin>>n;
    	int a[n];
    	for(int i=0; i<n; i++){
    		cin>>a[i];
    		mn = min(mn,a[i]);
    	}
    	int diff[n],mx=INT_MIN;
    	for(int i=0; i<n; i++){
    		diff[i] = abs(mn-a[i]);
    		if(diff[i]>0)v.pb(diff[i]);
    		mx = max(mx,diff[i]);
    	}
    	bool f = false;
    	int len = v.size();
    	for(int i=mx; i>=1 && !f; i--){
    		bool flag = false;
    		for(int j=0; j<len; j++){
    			if(v[j]%i){
    				flag = true;
    				break;
    			}
    		}
    		if(!flag){
    			cout << i << "\n";
    			f = true;
    		}
    	}
    	if(!f){
    		cout << "-1\n";
    	}
    }

    return 0;
}