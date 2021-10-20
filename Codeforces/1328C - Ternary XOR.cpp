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
        int n;
        cin>>n;
        string s,a="",b="";
        cin>>s;
        a+="1";
        b+="1";
        bool flag = 1;
        for(int i=1; i<s.length(); i++){
            if(flag){
                if(s[i]=='0'){
                    a+="0";
                    b+="0";
                }
                else if(s[i]=='1'){
                    a+="1";
                    b+="0";
                    flag = 0;
                }
                else if(s[i]=='2'){
                    a+="1";
                    b+="1";
                }
            }
            else{
                if(s[i]=='0'){
                    a+="0";
                    b+="0";
                }
                else if(s[i]=='1'){
                    a+="0";
                    b+="1";
                }
                else if(s[i]=='2'){
                    a+="0";
                    b+="2";
                }
            }
        }

        cout << a << "\n";
        cout << b << "\n";
    }
    
    return 0;
}