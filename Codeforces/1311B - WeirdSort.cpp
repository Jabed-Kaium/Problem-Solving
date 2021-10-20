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
        int a[n+1],b[m+1];
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<m; i++)cin>>b[i];

        bool is_sort = true;
        for(int i=0; i<n-1; i++){
            if(a[i] > a[i+1]){
                is_sort = false;
                break;
            }
        }
        if(is_sort){
            cout << "YES\n";
            continue;
        }

        while(true){
            for(int i=0; i<m; i++){
                int left = b[i]-1;
                int right = b[i];
                if(a[left] > a[right])swap(a[left],a[right]);
            }
            is_sort = true;
            for(int i=0; i<n-1; i++){
                if(a[i] > a[i+1]){
                    is_sort = false;
                    break;
                }
            }
            if(is_sort){
                cout << "YES\n";
                break;
            }
            is_sort = true;
            for(int i=0; i<m; i++){
                int left = b[i]-1;
                int right = b[i];
                if(a[left] > a[right]){
                    is_sort = false;
                    break;
                }
            }
            if(is_sort){
                cout << "NO\n";
                break;
            }
        }
    }
    
    return 0;
}