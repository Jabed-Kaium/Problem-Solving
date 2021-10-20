#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string p,h;
    cin>>t;
    while(t--){
        cin>>p;
        cin>>h;
        int p_len = p.length();
        int h_len = h.length();

        if(h_len < p_len){
            cout<<"NO\n";
        }
        else if(h_len == p_len){
            sort(p.begin(), p.end());
            sort(h.begin(), h.end());
            if(p==h){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            string s;
            bool flag = false;
            sort(p.begin(), p.end());
            for(int i=0; i<h_len; i++){
                s = h.substr(i,p_len);
                sort(s.begin(), s.end());
                if(s==p){
                    cout<<"YES\n";
                    flag = true;
                    break;
                }
            }
            if(flag==false){
                cout<<"NO\n";
            }
        }
    }

    return 0;
}