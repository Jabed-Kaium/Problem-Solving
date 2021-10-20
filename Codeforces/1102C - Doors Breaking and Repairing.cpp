#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x,y,m,cnt=0;

    cin>>n>>x>>y;

    for(int i=0; i<n; i++){
        cin>>m;
        if(m<=x)cnt++;
    }

    if(x>y){
        cout << n << "\n";
    }
    else{
        if(cnt%2 == 0){
            cout << cnt/2 << "\n";
        }
        else{
            cout << cnt/2 + 1 << "\n";
        }
    }


    return 0;
}