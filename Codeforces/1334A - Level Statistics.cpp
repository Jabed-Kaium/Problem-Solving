#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while(t--){
        int x,y;
        cin>>n;
        vector < pair<int,int> > v(n+1);
        v[0].first = 0;
        v[0].second = 0;
        for(int i=1; i<=n; i++){
            cin>>x>>y;
            v[i].first = x;
            v[i].second = y;
        }
        bool flag = 1;
        int i;
        for(i=1; i<v.size(); i++){
            if(v[i].first < v[i-1].first){
                flag = 0;
            }
            if(v[i].second < v[i-1].second){
                flag = 0;
            }
            if((v[i].first - v[i-1].first) < (v[i].second - v[i-1].second)){
                flag = 0;
            }
        }
        if(flag){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}