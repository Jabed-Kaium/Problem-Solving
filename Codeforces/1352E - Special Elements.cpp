#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8005];
    int cnt[8005];
    int t,n,sum;
    cin>>t;
    while(t--){
        int counter=0;
        cin>>n;
        for(int i=0; i<8005; i++){
            cnt[i]=0;
        }
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            sum=arr[i];
            for(int j=i+1; j<n; j++){
                sum += arr[j];
                if(sum>n)break;
                cnt[sum]=1;
            }
        }
        for(int i=0; i<n; i++){
            if(cnt[arr[i]]==1)counter++;
        }

        cout<<counter<<"\n";
    }
    
    return 0;
}