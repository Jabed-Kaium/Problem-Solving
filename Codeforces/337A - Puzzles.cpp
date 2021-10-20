#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    int arr[100];

    cin>>n>>m;

    for(int i=0; i<m; i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int mini = INT_MAX;
    for(int i=0; i<=m-n; i++){
        if(abs(arr[i]-arr[i+n-1])<mini){
            mini = abs(arr[i]-arr[i+n-1]);
        }
    }

    cout<<mini<<"\n";

    return 0;
}