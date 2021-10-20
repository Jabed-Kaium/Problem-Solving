#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while(t--){
        vector<int>ans;
        cin>>n;
        for(int i=1; i<=n; i*=2){
            ans.push_back(i);
            n-=i;
        }
        if(n>0){
            ans.push_back(n);
            sort(ans.begin(),ans.end());
        }

        cout<<ans.size()-1<<"\n";
        for(int i=1; i<ans.size(); i++){
            cout<<ans[i]-ans[i-1]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}