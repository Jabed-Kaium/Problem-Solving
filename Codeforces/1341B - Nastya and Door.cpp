#include<bits/stdc++.h>
using namespace std;

int a[200000+5],s[200000+5];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1; i<=n; i++){
            cin>>a[i];
            s[i]=0;
        }
        for(int i=2; i<n; i++){
            s[i] = (a[i]>a[i-1] && a[i]>a[i+1]); //if it's peak set 1 otherwise 0
        }
        for(int i=1; i<=n; i++){ //peaks prefix sum
            s[i] += s[i-1];
        }
        int max=0,id=1;
        for(int i=1; i<=n-k+1; i++){
            int j=i+k-1;
            int temp = s[j-1]-s[i]; //calculate number of peaks in range [i,j]
            if(temp>max){ //check if number of peaks of this range is greater than previous range
                max=temp;
                id=i;
            }
        }
        cout<<max+1<<" "<<id<<"\n";
    }

    return 0;
}