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

    int n;

    cin>>n;

    vector<int> v(n);
    vector<int>::iterator it;

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int ans = INT_MIN;

    for(int i=n-1; i>=0; i--){
        it = lower_bound(v.begin(),v.end(),v[i]-5);
        int idx = it - v.begin();
        int cnt = i-idx;

        ans = max(ans,cnt);
    }

    printf("%d\n", ans+1);

    return 0;
}