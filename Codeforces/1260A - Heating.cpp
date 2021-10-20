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
        if(a==1){
            cout<<b*b<<"\n";
        }
        else if(a>b){
            cout<<b<<"\n";
        }
        else{
            cout<<(b%a)*(b/a+1)*(b/a+1) + (a-(b%a))*(b/a)*(b/a)<<"\n";
        }
    }
    

    return 0;
}