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
    	bool f = false;
		int n,cnt=0;
		char c;
		cin>>n>>c;
		string s;
		cin>>s;
		char str[n+1];
		for(int i=0; i<n; i++){
			if(s[i] == c)
				cnt++;
		}
		if(cnt == n){
			cout << "0\n";
			continue;
		}
		for(int i=0; i<n; i++){
			str[i+1] = s[i];
		}
		for(int i=2; i<=n; i++){
			bool flag = false;
			for(int j=i; j<=n; j+=i){
				if(str[j] != c){
					flag = true;
					break;
				}
			}
			if(!flag){
				cout << "1\n" << i << "\n";
				f = true;
				break;
			}
		}
		if(!f){
			cout << "2\n" << n-1 << " " << n << "\n";
		}
    }

    return 0;
}