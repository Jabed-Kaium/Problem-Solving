#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const int m = 205;

int a[m];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>s;
        set<int>::iterator it;
        for(int i=1; i<=2*n; i++){
            s.insert(i);
        }
        for(int i=0; i<m; i++)a[i]=-1;

        int x;
        for(int i=1; i<=n; i++){
            cin>>x;
            a[2*i - 1] = x;
            s.erase(s.find(x));
        }
        for(int i=1; i<=2*n; i++){
            if(a[i] == -1){
                it = s.upper_bound(a[i-1]);
                if(it==s.end()){
                    continue;
                }
                else{
                    a[i] = *it;
                    s.erase(it);
                }
            }
        }
        bool flag = true;
        for(int i=1; i<=2*n; i++){
            if(a[i] == -1){
                flag = false;
                break;
            }
        }
        if(!flag)cout << "-1\n";
        else{
            for(int i=1; i<=2*n; i++){
                cout<<a[i]<<" ";
            }
            cout << "\n";
        }

    }
    
    return 0;
}