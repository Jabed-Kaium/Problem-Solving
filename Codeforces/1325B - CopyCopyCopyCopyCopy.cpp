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
        int n,x;
        set <int> s;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<"\n";
    }

    return 0;
}