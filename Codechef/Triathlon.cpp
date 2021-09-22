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

    int n,x,y,z,sum;

    cin>>n;

    vector < pair <int,int> > arr(n);

    for(int i=0; i<n; i++){
        cin>>x>>y>>z;
        sum = y+z;
        arr[i].first = sum;
        arr[i].second = x;
    }

    sort(arr.begin(),arr.end());

    int ans = INT_MIN,temp=0,temp2;

    for(int i=n-1; i>=0; i--){
        temp += arr[i].second;

        temp2 = temp + arr[i].first;

        ans = max(ans,temp2);
    }

    cout << ans << "\n";

    return 0;
}