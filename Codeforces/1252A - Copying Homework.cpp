#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int a[100005];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int min_index=0,max_index=0,mini=a[0],maxi=a[0];
    for(int i=1; i<n; i++){
        if(a[i]<mini){
            mini=a[i];
            min_index = i;
        }
        if(a[i]>maxi){
            maxi=a[i];
            max_index = i;
        }
    }
    swap(a[min_index],a[max_index]);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    return 0;
}