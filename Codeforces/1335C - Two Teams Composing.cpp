#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n+2];
        set <int> s;
        for(int i=0; i<n; i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        sort(a,a+n);
        int dis = s.size()-1;
        int same = INT_MIN;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(a[i]==a[i+1]){
                cnt++;
            }
            else{
                cnt++;
                same = max(same,cnt);
                cnt=0;
            }
        }

        if(dis==same){
            cout<< dis << "\n";
        }
        else if(dis > same){
            cout<< same << "\n";
        }
        else if(dis < same){
            dis++;
            same--;

            cout<< min(dis,same) << "\n";
        }
    }

    return 0;
}