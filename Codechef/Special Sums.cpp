#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long
#define MIN -10e18

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <ll> a(100005),b(100005),pref(100005),dpf(100005),dpb(100005);
    ll n;
    ll ans = MIN;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        ans = max(ans,a[i]);
    }

    for(int i=1; i<=n; i++){
        cin>>b[i];
    }

    pref[0] = 0;
    pref[1] = b[1];

    for(int i=2; i<=n; i++){
        pref[i] = pref[i-1] + b[i];
    }

    dpf[1] = a[1] - pref[1];
    for(int i=2; i<=n; i++){
        dpf[i] = max(dpf[i-1] , a[i]-pref[i]);
    }

    dpb[1] = a[1];
    for(int i=2; i<=n; i++){
        dpb[i] = max(dpb[i-1] , a[i]+pref[i-1]);
    }

    for(int j=2; j<=n; j++){
        ans = max(ans,max(a[j]+pref[j-1]+dpf[j-1] , a[j]+pref[n]-pref[j]+dpb[j-1]));
    }

    cout << ans << "\n";

    return 0;
}
