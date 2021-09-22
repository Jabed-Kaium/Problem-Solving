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

    map <ll,ll> mp;
    map<ll,ll>::iterator it;
    ll t,n,q,x,y,val;

    cin>>t;

    while(t--){
        cin>>n;
        mp.clear();

        ll id = 0;
        mp[0] = id++;

        while(n--){
            cin>>val;
            mp[val] = id++;
        }

        cin>>q;

        while(q--){
            cin>>x>>y;
            if(x == 0 && y == 0){
                cout << "0\n";
                continue;
            }
            it = mp.upper_bound(x+y);
            it--;
            if(x+y == it->first){
                cout << "-1\n";
            }
            else{
                cout << it->second << "\n";
            }
        }
    }

    return 0;
}