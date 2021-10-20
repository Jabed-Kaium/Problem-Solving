#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int a[55];
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int mini = a[1]-a[0];
        for(int i=2; i<n; i++){
            if(a[i]-a[i-1] < mini){
                mini = a[i] - a[i-1];
            }
        }
        cout<<mini<<"\n";
    }

    return 0;
}