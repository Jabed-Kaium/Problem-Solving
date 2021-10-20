#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int n,m,x,y;
        vector<string> v;
        string s;
        cin>>n>>m>>x>>y;
        for(int i=1; i<=n; i++){
            cin>>s;
            v.push_back(s);
        }
        for(int i=0; i<v.size(); i++){
            for(int j=0; j<v[i].size(); j++){
                if(v[i][j]=='*'){
                    continue;
                }
                else{
                    if(v[i][j+1]=='.'){
                        ans += min(2*x,y);
                        j++;
                    }
                    else{
                        ans += x;
                    }
                }
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}