#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    int a[100005];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        sort(a,a+n+1);
        int cnt=1,temp_index=0;
        for(int i=1; i<=n; i++){
            if((i-temp_index-1)+cnt >= a[i]){
                cnt += (i-temp_index);
                temp_index = i;
            }
        }

        cout<<cnt<<"\n";
    }

    return 0;
}