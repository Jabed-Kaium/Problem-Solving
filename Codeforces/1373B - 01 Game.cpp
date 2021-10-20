#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
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
        string s;
        int one=0,zero=0;
        int alice=1;
        stack<char> stk;

        cin>>s;

        for(int i=0; i<s.length(); i++){
            if(stk.empty()){
                stk.push(s[i]);
            }
            else if(stk.top() != s[i]){
                stk.pop();
                alice *= -1;
            }
            else{
                stk.push(s[i]);
            }
        }

        if(alice == -1)cout << "DA\n";
        else cout<<"NET\n";
        
    }

    return 0;
}