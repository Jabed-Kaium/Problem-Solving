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
		int a,b,c,d;
		cin>>a>>b;
		cin>>c>>d;

		int max1 = max(a,b);
		int max2 = max(c,d);
		int min1 = min(a,b);
		int min2 = min(c,d);

		if(max1==max2){
			if(min1+min2==max1){
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
		}
		else{
			cout<<"NO\n";
		}
	}
    
    return 0;
}