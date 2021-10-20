#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        string s;
        int ans = 0;
        cin>>s;
        int left_R,right_R;
        bool is_found = true;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='R'){
                left_R = i+1;
                is_found = false;
                break;
            }
        }
        if(is_found){
            cout << s.length()+1 << "\n";
            continue;
        }
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]=='R'){
                right_R = s.length() - i;
                break;
            }
        }
        ans = max(left_R,right_R);
        int i,j;
        for(i=0; i<s.length(); i++){
            if(s[i]=='R'){
                for(j=i+1; j<s.length(); j++){
                    if(s[j]=='R'){
                        ans = max(ans,j-i);
                        break;
                    }
                }
                i = j-1;
            }
        }

        cout << ans << "\n";
    }
    
    return 0;
}