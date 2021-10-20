#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,l;
    int d1,d2,d3;

    cin>>n>>l;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    d1 = abs(0-v[0]);
    d2 = abs(l-v[n-1]);
    d3 = INT_MIN;
    for(int i=1; i<n; i++){
        d3 = max(d3,v[i]-v[i-1]);
    }

    double ans1 = d3*1.0 / 2 , ans2 = d2*1.0 , ans3 = d1*1.0;

    printf("%.10lf\n", max(ans1,max(ans2,ans3)));

    return 0;
}