#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n == k){
            cout<<"0\n";
        }
        else if(n%2!=0 && k%2!=0){
            cout<<"-1\n";
        }
        else{
            ll maxi = max(n,k);
            ll mini = min(n,k);
            ll cnt=0;
            bool flag = 1;

            while(maxi%8==0 && maxi/8 >= mini && flag == 1){
                cnt++;
                maxi /= 8;
                if(maxi == mini)flag=0;
            }
            while(maxi%4==0 && maxi/4 >= mini && flag == 1){
                cnt++;
                maxi /= 4;
                if(maxi == mini)flag=0;
            }
            while(maxi%2==0 && maxi/2 >= mini && flag == 1){
                cnt++;
                maxi /= 2;
                if(maxi == mini)flag=0;
            }

            if(flag==0){
                cout<<cnt<<"\n";
            }
            else{
                cout<<"-1\n";
            }
        }
    }

    return 0;
}