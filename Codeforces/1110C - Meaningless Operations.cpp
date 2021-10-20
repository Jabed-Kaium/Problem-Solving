#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int m = 33554432;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    map <int,int> mp;
    map <int,int>::iterator it;
    for(int i=2; i<=m; i*=2){
        mp[i] = i*2 - 1;
    }
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        it = mp.lower_bound(n);
        if((it->first)-1 == n){
            int div = 1;
            for(int i=2; i*i<=n; i++){
                if(n%i==0){
                    div = max(div,max(i,n/i));
                }
            }
            cout << __gcd(n,div) << "\n";
        }
        else if(it->first == n){
            cout << it->second << "\n";
        }
        else{
            --it;
            cout << it->second << "\n";
        }
    }

    return 0;
}