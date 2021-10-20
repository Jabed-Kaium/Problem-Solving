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
        int a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<"0\n";
        }
        else{
            int temp = a/b;
            int temp2 = b*(temp+1);
            cout<<temp2-a<<"\n";
        }
    }

    return 0;
}