#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,h,c,t;
    cin>>n;
    while(n--){
        cin>>h>>c>>t;
        if(h==t){
            cout<<"1\n";
        }
        else{
            if(2*t <= (h+c)){
                cout<<"2\n";
            }
            else{
                ll x = (t-c)/(2*t - h - c);
                ll y = x+1;

                long double tmp1 = (h*x + c*(x-1))*1.0 / (2*x - 1);
                long double tmp2 = (h*y + c*(y-1))*1.0 / (2*y - 1);

                long double diff1 = abs(tmp1 - t);
                long double diff2 = abs(tmp2 - t);

                if(diff1 <= diff2){
                    cout<< 2*x - 1 <<"\n";
                }
                else{
                    cout<< 2*y - 1 <<"\n";
                }
            }
        }
    }

    return 0;
}