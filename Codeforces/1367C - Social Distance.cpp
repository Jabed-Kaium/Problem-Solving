#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cin>>s;
        int ans = 0;
        int i,j;

        int temp = 0;
        for(i=0; i<s.length(); i++){
            if(s[i] == '0')temp++;
            if(s[i] == '1')break;
        }
        if(temp >= k+1){
            ans += (temp/(k+1));
        }
        if(i == s.length()){
            if(k >= temp){
                cout << "1\n";
            }
            else{
                ans=0;
                while(temp >= k+1){
                    ans++;
                    temp -= (k+1);
                }
                if(temp > 0)ans++;
                cout << ans << "\n";
            }
            continue;
        }

        temp = 0;
        for(j=i+1; j<s.length(); j++){
            if(s[j] == '0')temp++;
            if(s[j] == '1'){
                while(temp >= (2*k+1)){
                    ans++;
                    temp -= (k+1);
                }
                temp=0;
            }
        }

        temp=0;
        for(int k=s.length()-1; k>=0; k--){
            if(s[k] == '0')temp++;
            if(s[k] == '1')break;
        }
        if(temp >= k+1){
            ans += (temp/(k+1));
        }

        cout << ans << "\n";
    }
    
    return 0;
}