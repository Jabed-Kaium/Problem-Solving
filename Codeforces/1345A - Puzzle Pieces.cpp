#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a==1 || b==1){
			cout<<"YES\n";
		}
		else if(a==2 && b==2){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
    
    return 0;
}