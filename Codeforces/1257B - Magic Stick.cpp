#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a==1 && b!=1){
            cout<<"NO\n";
        }
        else if(a>=b){
            cout<<"YES\n";
        }
        else{
            if(a%2==0){
                if((3*a)/2 == a+1 && (3*a)/2 != b){
                    cout<<"NO\n";
                }
                else{
                    cout<<"YES\n";
                }
            }
            else{
                if((3*(a-1))/2 == a){
                    cout<<"NO\n";
                }
                else{
                    cout<<"YES\n";
                }
            }
        }
    }
    

    return 0;
}