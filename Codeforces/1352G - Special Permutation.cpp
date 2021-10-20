#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    vector<int> v;
    cin>>t;
    while(t--){
        cin>>n;
        if(n<4){
            cout<<"-1\n";
            continue;
        }
        if(n%2==0){
            for(int i=n-1; i>=1; i-=2){
                v.push_back(i);
            }
            v.push_back(4);
            v.push_back(2);
            for(int i=6; i<=n; i+=2){
                v.push_back(i);
            }
        }
        else{
            for(int i=n; i>=1; i-=2){
                v.push_back(i);
            }
            v.push_back(4);
            v.push_back(2);
            for(int i=6; i<n; i+=2){
                v.push_back(i);
            }
            }

            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<" ";
            }
            cout<<"\n";
            v.clear();
        }
    
    return 0;
}