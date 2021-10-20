#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

struct check{
    int pos;
    int neg;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n+5];
        int b[n+5];
        struct check c[n+5];

        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        for(int i=0; i<n; i++){
            c[i].pos = 0;
            c[i].neg = 0;
        }

        int posi=0,nega=0;
        for(int i=0; i<n; i++){
            c[i].pos += posi;
            c[i].neg += nega;

            if(a[i] > 0)posi++;
            else if(a[i] < 0)nega++;
        }

        bool flag = 1;

        for(int i=1; i<n && flag == 1; i++){
            if(a[i]==b[i])continue;
            else if(a[i] < b[i]){
                if(c[i].pos == 0){
                    flag = 0;
                }
            }
            else if(a[i] > b[i]){
                if(c[i].neg == 0){
                    flag = 0;
                }
            }
        }

        if(a[0] != b[0])flag = 0;

        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}