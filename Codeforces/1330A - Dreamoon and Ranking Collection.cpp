#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int size_v = 201;
bool achieved[size_v];

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,x,position;
        cin>>n>>x;
        for(int i=1; i<=n+x; i++){
            achieved[i]=false;
        }
        for(int i=1; i<=n; i++){
            cin>>position;
            achieved[position]=true;
        }
        for(int i=n+x; i>0; i--){
            int v = 0;
            for(int j=1; j<=i; j++){
                if(!achieved[j])v++;
            }
            if(v<=x){
                cout<<i<<"\n";
                break;
            }
        }
    }

    return 0;
}