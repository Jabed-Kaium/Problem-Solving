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

    int n;
    string s;
    stack <int> st;

    cin>>n;
    cin>>s;

    if(n&1){
        printf("No\n");
    }
    else{
        int open=0,close=0;
        int len = s.length();

        for(int i=0; i<len; i++){
            if(s[i] == '(')open++;
            else close++;
        }

        for(int i=0; i<len; i++){
            if(s[i] == '(')st.push(1);
            else if(!st.empty()){
                st.pop();
                open--;
                close--;
            }
        }

        if(st.size() < 2 && ((open == 1 && close == 1) || (open == 0 && close == 0))){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }


    return 0;
}