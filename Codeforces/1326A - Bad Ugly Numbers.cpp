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
        string s = "";
        cin>>n;
        if(n==1){
            cout<<"-1\n";
            continue;
        }
        else{
            s += "2";
            for(int i=2; i<=n; i++){
                s += "3";
            }
        }

        cout<<s<<"\n";
    }

    return 0;
}