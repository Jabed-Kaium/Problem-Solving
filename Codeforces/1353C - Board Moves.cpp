#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t,n,temp,k,sum;

    cin>>t;
    while(t--){
        sum = 0;
        cin>>n;
        temp=n;
        k = n/2;
        while(k>0){
            sum += (temp*k)*4;
            sum -= (k*4);
            temp -= 2;
            k--;
        }

        cout<<sum<<"\n";
    }

    return 0;
}