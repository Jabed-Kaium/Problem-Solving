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

    int a[502][502];
    int n,m;
    bool flag = false;

    cin>>n>>m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=n-1; i>=0 && !flag; i--){
        for(int j=m-1; j>=0 && !flag; j--){
            if(a[i][j] == 0){
                int mini = min(a[i][j+1],a[i+1][j]);
                mini--;
                if(mini <= a[i][j-1] || mini <= a[i-1][j]){
                    flag = true;
                    break;
                }
                else{
                    a[i][j] = mini;
                }
            }
            else{
                if((i>0 && j>0) && (a[i][j] <= a[i][j-1] || a[i][j] <= a[i-1][j])){
                    flag = true;
                    break;
                }
            }
        }
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
        {
            sum += a[i][j];
        }
    }

    if(flag)printf("-1\n");
    else printf("%d\n", sum);


    return 0;
}