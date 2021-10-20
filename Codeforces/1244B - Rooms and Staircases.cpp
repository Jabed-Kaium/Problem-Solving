#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string a;
    cin>>t;
    while(t--){
        int n,cnt=0,i,maxi,left,right;
        cin>>n;
        cin>>a;
        for(i=0; i<a.size(); i++){
            if(a[i]=='1')cnt++;
        }
        if(cnt==0){
            cout<<n<<"\n";
            continue;
        }
        left,right;
        for(i=0; i<a.size(); i++){
            if(a[i]=='1'){
                left=i+1;
                break;
            }
        }
        for(i=a.size()-1; i>=0; i--){
            if(a[i]=='1'){
                right=i+1;
                break;
            }
        }
        left = n-left+1;
        maxi = max(left,right);
        cout<<maxi*2<<"\n";
    }

    return 0;
}