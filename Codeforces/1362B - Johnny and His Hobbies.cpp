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
        multiset <int> a;
        multiset <int>::iterator it;
        cin>>n;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.insert(x);
        }
        int ans = INT_MAX;
        for(int i=1; i<=1024; i++){
            multiset <int> s;
            for(it = a.begin(); it!=a.end(); it++){
                s.insert(i^(*it));
            }
            if(a==s){
                ans = i;
                break;
            }
        }
        if(ans == INT_MAX)cout<<"-1\n";
        else cout<<ans<<"\n";
    }

    return 0;
}