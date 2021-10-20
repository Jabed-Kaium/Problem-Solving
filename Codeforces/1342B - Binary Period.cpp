#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s;

    cin>>t;
    while(t--){
        cin>>s;
        bool checker = false;
        for(int i=0; i<s.length()-1; i++){
            if(s[i]!=s[i+1])checker=true;
        }
        if(!checker)cout<<s<<"\n";
        else{
            for(int i=0; i<s.length(); i++){
                cout<<"10";
            }
            cout<<"\n";
        }
    }

    return 0;
}