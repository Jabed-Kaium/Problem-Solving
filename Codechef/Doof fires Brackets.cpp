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
        stack <int> st;

        cin>>s;

        int n = s.length();
        int a[n];
        memset(a,-1,sizeof(a));

        int q;
        cin>>q;
        int query[q];
        for(int i=0; i<q; i++){
            cin>>query[i];
        }

        for(int i=0; i<n; i++){
            if(s[i] == '('){
                st.push(i);
            }
            else{
                if(!st.empty()){
                    a[st.top()] = i;
                    st.pop();
                }
            }
        }
        for(int i=n-2; i>=0; i--){
            if(s[i] == ')'){
                a[i] = a[i+1];
            }
        }

        for(int i=0; i<q; i++){
            if(a[query[i] - 1] == -1){
                cout << "-1\n";
            }
            else{
                cout << a[query[i] - 1] + 1 << "\n";
            }
        }
    }

    return 0;
}