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
        int a[505],b[505];
        cin>>n;
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];

        bool is_sorted = 1;

        for(int i=0; i<n-1; i++){
            if(a[i] > a[i+1])is_sorted = 0;
        }

        if(is_sorted){
            cout << "Yes\n";
            continue;
        }

        int one=0,zero=0;
        for(int i=0; i<n; i++){
            if(b[i])one++;
            else zero++;
        }

        if(one && zero){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }

    return 0;
}