#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,l,r;
    int arr[100005];
    int brr[100005];
    cin>>t;
    while(t--){
        l = -1 , r = -2;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            cin>>brr[i];
        }
        if(n==1){
            if(arr[0]>brr[0]){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
            continue;
        }
        for(int i=0; i<n; i++){
            if(arr[i]!=brr[i]){
                l = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(arr[i]!=brr[i]){
                r = i;
                break;
            }
        }
        if(l==r){
            if(arr[l]<brr[l]){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
            continue;
        }
        int diff = abs(arr[l]-brr[l]);
        for(int i=l; i<=r; i++){
            arr[i] += diff;
        }
        bool flag = false;
        for(int i=0; i<n; i++){
            if(arr[i]!=brr[i]){
                flag = true;
                break;
            }
        }

        if(flag == false){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}