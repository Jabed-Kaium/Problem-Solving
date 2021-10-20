#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,k;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cin>>s;
        sort(s.begin(),s.end());
        if(k==1){
            cout<<s<<"\n";
        }
        else if(s[0]==s[k-1]){
            string temp="";
            temp+=s[0];
            if(s[k]==s[n-1]){
                int m = ceil((n-k)*1.0/k);
                for(int i=0; i<m; i++){
                    temp+=s[k];
                }
            }
            else{
                for(int i=k; i<n; i++){
                    temp+=s[i];
                }
            }
            cout<<temp<<"\n";
        }
        else if(s[0]!=s[k-1]){
            cout<<s[k-1]<<"\n";
        }

    }

    return 0;
}