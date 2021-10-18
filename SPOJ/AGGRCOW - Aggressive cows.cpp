#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int a[1000000];
int n,c;

bool check(int x){
    int cows = 1, last_position = a[0];

    for(int i=1; i<n; i++){
        if(a[i] - last_position >= x){
            if(++cows == c){
                return true;
            }
            last_position = a[i];
        }
    }

    return false;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        int low=0,high=1000000000,mid,pos=0;

        cin>>n>>c;

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a,a+n);

        while(high >= low){
            mid = (high+low)/2;

            if(check(mid)){
                low = mid+1;
                pos = mid;
            }
            else{
                high = mid-1;
            }
        }

        cout << pos << "\n";
    }



    return 0;
}