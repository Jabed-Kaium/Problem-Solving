#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,a,b;

    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        string s = "";
        int mini = min(b,26);
        int indx=0;
        for(int i=0; i<n; i++){
            s +=(97+(indx++));
            if(indx==mini)indx=0;
        }

        cout<<s<<"\n";
    }

    return 0;
}