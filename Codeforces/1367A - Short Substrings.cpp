#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string a;
    int t;
    cin>>t;
    while(t--){
        cin>>a;
        string ans="";
        int len = a.length();
        for(int i=0; i<len-2; i+=2){
            ans += a[i];
        }
        ans += a[len-2];
        ans += a[len-1];

        cout << ans << '\n';
    }
    
    return 0;
}