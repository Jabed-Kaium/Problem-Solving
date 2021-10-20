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
        int n,m;
        cin>>n>>m;
        int a[n+1][m+1];
        set <int> r,c;
        set <int>::iterator it;
        for(int i=0; i<n; i++){
            r.insert(i);
        }
        for(int i=0; i<m; i++){
            c.insert(i);
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
                if(a[i][j]==1){
                    it = r.find(i);
                    if(it!=r.end()){
                        r.erase(it);
                    }
                    it = c.find(j);
                    if(it!=c.end()){
                        c.erase(it);
                    }
                }
            }
        }
        int flag = 1;
        while(r.size()!=0 && c.size()!=0){
            if(r.size()!=0){
                r.erase(r.begin());
            }
            if(c.size()!=0){
                c.erase(c.begin());
            }
            flag *= -1;
        }

        if(flag == 1)cout<<"Vivek\n";
        else cout<<"Ashish\n";
    }

    return 0;
}