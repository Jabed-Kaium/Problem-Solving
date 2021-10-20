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
		int n,k;
		cin>>n; 
		for(k=2; k<=30; k++){
			int p = pow(2,k)-1;
			if(n%p==0){
				cout<<n/p<<"\n";
				break;
			}
		}
	}
    
    return 0;
}