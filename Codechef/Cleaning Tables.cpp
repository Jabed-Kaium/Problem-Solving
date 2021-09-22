//Method used : Optimal Page Replacement Algorithm

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int ans;

bool search(int key,vector<int> fr){
    for(int i=0; i<fr.size(); i++){
        if(fr[i] == key){
            return true;
        }
    }
    return false;
}

int predict(vector<int> pg, vector<int> fr, int m,int index){
    int res = -1, farthest = index;

    for(int i=0; i<fr.size(); i++){
        int j;
        for(j=index; j<m; j++){
            if(pg[j] == fr[i]){
                if(j > farthest){
                    farthest = j;
                    res = i;
                }
                break;
            }
        }
        if(j == m){
            return i;
        }
    }

    return (res == -1) ? 0 : res ;
}

void optimalPage(vector<int>pg, int m,int n){
    vector <int> fr;

    for(int i=0; i<m; i++){
        if(search(pg[i],fr)){
            continue;
        }

        if(fr.size() < n){
            fr.pb(pg[i]);
            ans++;
        }
        else{
            int j = predict(pg,fr,m,i+1);
            fr[j] = pg[i];
            ans++;
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ans = 0;
        int n,m;
        cin>>n>>m;

        vector <int> pg(m);
        
        for(int i=0; i<m; i++){
            cin>>pg[i];
        }

        optimalPage(pg,m,n);

        cout << ans << "\n";
    }

    return 0;
}
