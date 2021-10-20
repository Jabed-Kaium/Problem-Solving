#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int a[3000000];

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        memset(a,0,sizeof(a));

        int ans = INT_MAX;
        bool checker = false;

        int n,x;
        cin>>n;

        for(int i=1; i<=n; i++){
            cin>>x;
            if(a[x] != 0){
                ans = min(ans,i-a[x]+1);
                checker = true;
            }
            a[x] = i;
        }

        if(checker == true)cout<<ans<<"\n";
        else cout<<"-1"<<"\n";
    }

    return 0;
}