#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int a[105];
        int n,k,d,i,j;
        int mini = INT_MAX;
        set <int> st;    
        cin>>n>>k>>d;
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        for(i=0; i<=n-d; i++){
            int cnt=0;
            st.clear();
            for(j=i; cnt<d; j++){
                st.insert(a[j]);
                cnt++;
            }
            int sz = st.size();
            mini = min(mini,sz);
        }
        cout<<mini<<"\n";
    }

    return 0;
}