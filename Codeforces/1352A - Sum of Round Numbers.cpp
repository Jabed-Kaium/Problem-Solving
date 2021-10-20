#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        int arr[1000];
        int temp,k=0;
        cin>>n;
        if(n>9999){
            temp = n/10000;
            arr[k++] = temp*10000;
            n%=10000;
        }
        if(n>999){
            temp = n/1000;
            arr[k++] = temp*1000;
            n%=1000;
        }
        if(n>99){
            temp = n/100;
            arr[k++] = temp*100;
            n%=100;
        }
        if(n>9){
            temp = n/10;
            arr[k++] = temp*10;
            n%=10;
        }
        if(n>=1){
            arr[k++] = n;
        }
        
        cout<<k<<"\n";
        for(int i=0; i<k; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}