#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,x;

    cin>>t;
    while(t--){
        bool flag = false;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>x;
            if(x%2 == 0){
                flag = true;
            }
        }

        if(flag)cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}