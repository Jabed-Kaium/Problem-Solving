#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int sq = sqrt(n);
    
    int ans = 2*n + 2 , temp;

    for(int i=2; i<=sq+1; i++){
        if(n%i==0){
            temp = (i*2) + ((n/i)*2);
            ans = min(ans,temp);
        }
    }

    cout<<ans<<"\n";

    return 0;
}