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
    cin>>t;
    while(t--){
        int n;
        string s1,s2,t1="",t2="";
        cin>>n;
        cin>>s1;
        cin>>s2;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(s1[i]!=s2[i]){
                cnt++;
                t1+=s1[i];
                t2+=s2[i];
            }
        }
        if(cnt==2 && t1[0]==t1[1] && t2[0]==t2[1])cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}