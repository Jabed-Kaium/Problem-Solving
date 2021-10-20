#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    if(k==0){
        cout<<s;
    }
    else if(n==1){
        cout<<"0";
    }
    else{
        bool flag = false;
        for(int i=0; i<n && flag==false; i++){
            if(i==0 && s[i]!='1'){
                s[i++]='1';
                k--;
                while(k>0){
                    if(s[i]!='0'){
                        s[i++]='0';
                        k--;
                    }
                    else{
                        i++;
                    }
                }
                flag=true;
            }
            else if(flag==false && i!=0 && i<n && s[i]!='0'){
                while(k>0 && i<n){
                    if(s[i]!='0'){
                        s[i++]='0';
                        k--;
                    }
                    else{
                        i++;
                    }
                }
                flag=true;
            }
        }
        cout<<s;
    }
    cout<<"\n";

    return 0;
}