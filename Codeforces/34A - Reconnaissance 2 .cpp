#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int arr[1005];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    int mini = abs(arr[1]-arr[2]);
    int start = 1, end = 2;
    for(int i=2; i<n; i++){
        if(abs(arr[i]-arr[i+1])<mini){
            mini = abs(arr[i]-arr[i+1]);
            start = i;
            end = i+1;
        }
    }
    if(abs(arr[n]-arr[1])<mini){
        start = n;
        end = 1;
    }

    cout<<start<<" "<<end<<"\n";
    
    return 0;
}