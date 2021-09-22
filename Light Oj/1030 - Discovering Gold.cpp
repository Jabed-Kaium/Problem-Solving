
/*
    Method : Expected Value
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a[105];

    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int n;
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>a[j];
        }

        for(int j=n-1; j>=0; j--){
            double sum = 0;
            int cnt = 0;
            for(int k=j+1; cnt<6 && k<n; k++){
                sum += a[k];
                cnt++;
            }
            if(cnt==0){
                a[j] = a[j] + sum;
            }
            else{
                a[j] = a[j] + (1.0/cnt)*sum;
            }
        }
        printf("Case %d: %lf\n", i,a[0]);
    }

    return 0;
}