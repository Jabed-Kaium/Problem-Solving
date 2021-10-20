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

    int n;
    bool flag = false;
    int a[20];

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<=(1<<n)-1; i++){ //checking all subset
        int sum = 0;
        for(int j=0; j<n; j++){
            if(i&(1<<j)){
                sum += a[j];    //clockwise
            }
            else{
                sum -= a[j];    //anti-clockwise
            }
        }
        if(sum%360 == 0){
            flag = true;    //if any combination pass the demand
            break;
        }
    }

    if(flag)cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}