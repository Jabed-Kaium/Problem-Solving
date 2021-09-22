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

    ll n,vnum,wnum,temp;
    ll ans = 10e18;

    cin>>n>>vnum>>wnum;

    vector < pair<ll,ll> > contest(n);
    vector <ll> v(vnum);
    vector <ll> w(wnum);
    vector <ll>::iterator it1,it2;

    for(ll i =0; i<n; i++){
        cin>>contest[i].first>>contest[i].second;
    }
    for(ll i=0; i<vnum; i++){
        cin>>v[i];
    }
    for(ll i=0; i<wnum; i++){
        cin>>w[i];
    }

    sort(contest.begin(),contest.end());
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());

    for(ll i=0; i<n; i++){
        it1 = upper_bound(v.begin(),v.end(),contest[i].first);
        it1--;
        it2 = lower_bound(w.begin(),w.end(),contest[i].second);

        if(it1==v.end() || it2==w.end()){
            continue;
        }

        if(*it2 > *it1){
            temp = (*it2 - *it1) + 1;
            ans = min(ans,temp);
        }
        
    }

    cout << ans << "\n";

    return 0;
}