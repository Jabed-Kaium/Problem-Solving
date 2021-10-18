#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    cin.ignore();
    while(t--){
        bool flag = false;
        getline(cin,s);
        int len = s.length();
        if(len==10){
            for(int i=0; i<len; i++){
                if(s[i]>='0' && s[i]<='9')continue;
                else{
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                if(s[0]=='0')cout<<"NO\n";
                else cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }

    return 0;
}