#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t;
    cin>>t;
    while(t--){
        int table[3];
        queue <int> q;
        cin>>s;
        bool flag = false;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='a' || s[i]=='b' || s[i]=='c'){
                if(s[i]==s[i+1]){
                    flag = true;
                    break;
                }
            }
        }
        if(flag==true){
            cout<<"-1\n";
            continue;
        }
        for(int i=0; i<s.length()-1; i++){
            if(s[i]=='?' && s[i+1]!='?'){
                q.push(i+1);
            }
        }
        for(int i=0; i<s.length(); i++){
            table[0] = 0;
            table[1] = 0;
            table[2] = 0;

            if(s[i]=='?'){
                table[s[i-1] - 97] = 1;
                if(!q.empty()){
                    table[s[q.front()] - 97] = 1;
                }
                for(int j=0; j < 3; j++){
                    if(table[j]==0){
                        s[i] = j + 97;
                        break;
                    }
                }
                if(!q.empty() && i+1 >= q.front()){
                    q.pop();
                }
            }
        }
        cout<<s<<"\n";
    }

    return 0;
}