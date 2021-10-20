#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int a[10000000];

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map <int,int> mp;
    map <int,int>::iterator it;
    vector <int> v;
    vector <int>::iterator itt;
    int x=1;
    mp[0] = 0;
    int idx=1;
    while(x<=1000000){
        x *= 2;
        mp[x-1] = idx;
        a[x-1] = 1;
        idx++;
    }
    int n;
    cin>>n;
    if(a[n] == 1){
        cout << "0\n";
        return 0;
    }
    int i;
    for(i=1; i<=40; i++){
        if(i&1){
            it = mp.lower_bound(n);
            n = n^(it->first);
            v.pb(it->second);
            if(a[n] == 1)break;
        }
        else{
            n++;
            if(a[n] == 1)break;
        }
    }
    cout << i << "\n";
    for(itt = v.begin(); itt!=v.end(); itt++){
        cout << *itt << " ";
    }
    cout << "\n";

    return 0;
}