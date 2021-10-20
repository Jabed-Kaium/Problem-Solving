#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    double n,m,k,tmp,ans,each;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        each = n/k;
        if(each>=m){
            cout<<(int)m<<"\n";
        }
        else{
            m = m - each;
            k--;
            if(m<=k){
                cout<<(int)(each-1)<<"\n";
            }
            else{
                tmp = ceil(m/k);
                cout<<(int)(each-tmp)<<"\n";
            }
        }
    }

    return 0;
}