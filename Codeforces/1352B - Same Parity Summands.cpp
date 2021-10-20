#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int x = n-(k-1);
        int y = n-(2*(k-1));
        if(x>0 && x%2!=0){
            cout<<"YES\n";
            for(int i=1; i<k; i++){
                cout<<"1 ";
            }
            cout<<x<<"\n";
        }
        else if(y>0 && y%2==0){
            cout<<"YES\n";
            for(int i=1; i<k; i++){
                cout<<"2 ";
            }
            cout<<y<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}