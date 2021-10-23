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
    
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	string s,rev;
    	cin>>s;
    	bool flag = false, f = false;
    	for(int i=0; i<n; i++){
    		if(s[i]=='?')flag = true;
    		if(s[i]!='?')f = true;
    	}
    	if(!flag){
    		cout << s << "\n";
    		continue;
    	}
    	if(!f){
    		for(int i=0; i<n; i++){
    			if(i%2==0)
    				cout << 'R';
    			else
    				cout << 'B';
    		}
    		cout << "\n";
    		continue;
    	}
    	int l,r;
    	for(int i=0; i<n; i++){
    		if(s[i]!='?'){
    			l = i;
    			break;
    		}
    	}
    	for(int i=n-1; i>=0; i--){
    		if(s[i]!='?'){
    			r = i;
    			break;
    		}
    	}
    	for(int i=l-1; i>=0; i--){
    		if(s[i+1]=='B'){
    			s[i]='R';
    		}
    		else{
    			s[i]='B';
    		}
    	}
    	for(int i=r+1; i<n; i++){
    		if(s[i-1]=='B'){
    			s[i]='R';
    		}
    		else{
    			s[i]='B';
    		}
    	}

    	rev = s;

    	for(int i=l+1; i<r; i++){
    		if(s[i]=='?'){
    			if(s[i-1]=='B'){
    				s[i]='R';
    				}
    			else{
    				s[i]='B';
    			}
    		}
    	}
    	for(int i=r-1; i>l; i--){
    		if(rev[i]=='?'){
    			if(s[i+1]=='B'){
    				rev[i]='R';
    				}
    			else{
    				rev[i]='B';
    			}
    		}
    	}

    	int cnt1=0,cnt2=0;
    	for(int i=0; i<n-1; i++){
    		if(s[i]==s[i+1])cnt1++;
    	}
    	for(int i=0; i<n-1; i++){
    		if(rev[i]==rev[i+1])cnt2++;
    	}

    	if(cnt1<cnt2)
    		cout << s << "\n";
    	else
    		cout << rev << "\n";
    }

    return 0;
}