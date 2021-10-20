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

    int k;
    string s;

    cin>>s;
    cin>>k;

    int len = s.length();
    for(int i=0; i<s.length(); i++){
        if(s[i]=='?' || s[i]=='*')len--;
    }

    for(int i=0; i<s.length(); i++){
        if(s[i]=='*' && len<k){
            s.insert(i,k-len,s[i-1]);
            len = k;
        }
        else if(s[i]=='?' || s[i]=='*'){
            s.erase(i--, 1);
            if(len > k){
                s.erase(i--, 1);
                len--;
            }
        }
    }

    if(len == k){
        cout << s << "\n";
    }
    else{
        cout << "Impossible\n";
    }

    return 0;
}