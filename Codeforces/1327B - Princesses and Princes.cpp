#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set <int> s;
        set <int>::iterator it;
        vector <int> v[n+1];
        for(int i=1; i<=n; i++){
            s.insert(i);
        }
        int k;
        for(int i=1; i<=n; i++){
            cin>>k;
            for(int j=1; j<=k; j++){
                int x;
                cin>>x;
                v[i].pb(x);
            }
        }
        int indx = INT_MAX;
        for(int i=1; i<=n; i++){
            bool is_find = true;
            for(int j=0; j<v[i].size(); j++){
                it = s.find(v[i][j]);
                if(it!=s.end()){
                    s.erase(it);
                    is_find = false;
                    break;
                }
            }
            if(is_find){
                indx = min(indx,i);
            }
        }

        if(indx == INT_MAX){
            cout << "OPTIMAL\n";
        }
        else{
            it = s.begin();
            cout<< "IMPROVE\n";
            cout << indx << " " << *it << "\n";
        }
    }
    
    return 0;
}