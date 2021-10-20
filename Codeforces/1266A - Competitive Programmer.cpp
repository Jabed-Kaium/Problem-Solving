#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int sum = 0;
        int zero=0,even=0,integer;
        for(int i=0; i<s.size(); i++){
            integer = s[i]-48;
            sum += integer;
            if(integer==0)zero++;
            if(integer%2==0)even++;
        }
        if(sum%3==0 && zero>=1 && even >=2){
            cout<<"red\n";
        }
        else{
            cout<<"cyan\n";
        }
    }

    return 0;
}