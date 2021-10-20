#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,k;
    vector<string>v;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        if(n==1 && m==1 && k==1){
            cout<<"0011\n";
            continue;
        }
        else if(m==0 && k==0){
            for(int i=0; i<n+1; i++){
                cout<<"0";
            }
            cout<<"\n";
            continue;
        }
        else if(n==0 && k==0){
            for(int i=0; i<m+1; i++){
                if(i%2!=0)cout<<"0";
                else cout<<"1";
            }
            cout<<"\n";
            continue;
        }
        else if(n==0 && m==0){
            for(int i=0; i<k+1; i++){
                cout<<"1";
            }
            cout<<"\n";
            continue;
        }
        else if(m==1){
            for(int i=0; i<k; i++){
            v.push_back("1");
        }
        v.push_back("10");
        for(int i=0; i<n; i++){
            v.push_back("0");
        }
        for(int i=0; i<v.size(); i++){
            cout<<v[i];
        }
        cout<<"\n";
        v.clear();
        continue;
        }
        for(int i=0; i<k; i++){
            v.push_back("1");
        }
        if(m==1){
            v.push_back("10");
        }
        else{
        for(int i=0; i<m/2; i++){
            v.push_back("10");
        }
        }
        for(int i=0; i<n; i++){
            v.push_back("0");
        }
        if(m%2==0){
            v.push_back("1");
        }
        else{
            v.push_back("10");
        }

        for(int i=0; i<v.size(); i++){
            cout<<v[i];
        }
        cout<<"\n";
        v.clear();
    }
    
    return 0;
}