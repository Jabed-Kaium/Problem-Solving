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

    int t,n;

    cin>>t;
    while(t--){

        cin>>n;

        if(n%2 == 0){
            cout << n/2 << " " << n/2 << "\n";
        }
        else{
            bool flag = true;
            for(int i=2; i*i<=n; i++){
                if(n%i == 0){
                    cout << n/i << " " << n-(n/i) << "\n";
                    flag = false;
                    break;;
                }
            }
            if(flag){
                cout << "1" << " " << n-1 << "\n";
            }
        }
    }

    return 0;
}