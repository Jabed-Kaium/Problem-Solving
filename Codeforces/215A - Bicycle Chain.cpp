#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a[100],b[100];
    int n,m;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    
    int cnt = 0, maxi = INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            double ratio = (b[j]/a[i]);
            if(floor(ratio)==ceil(ratio)){
                if(ratio>maxi){
                    maxi = ratio;
                    cnt=1;
                }
                else if(ratio==maxi){
                    cnt++;
                }
            }
        }
    }

    cout<<cnt<<"\n";

    return 0;
}