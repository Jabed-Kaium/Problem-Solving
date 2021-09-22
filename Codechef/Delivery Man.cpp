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

    int n,x,y,idx;

    cin>>n>>x>>y;

    vector <int> a(n),b(n);
    vector < pair <int,int> > diff(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
        diff[i].first = abs(a[i]-b[i]);
        diff[i].second = i;
    }

    sort(diff.begin(),diff.end());

    int sum = 0;

    for(int i=n-1; i>=0; i--){
        idx = diff[i].second;
        if(x && y){
            if(a[idx] > b[idx]){
                sum += a[idx];
                x--;
            }
            else{
                sum += b[idx];
                y--;
            }
        }
        else if(x){
            sum += a[idx];
            x--;
        }
        else{
            sum += b[idx];
            y--;
        }
    }

    cout << sum << "\n";

    return 0;
}
