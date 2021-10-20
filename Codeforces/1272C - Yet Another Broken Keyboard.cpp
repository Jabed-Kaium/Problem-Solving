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

    ll n,k;
    int arr[26];
    memset(arr,0,sizeof(arr));
    string s;
    char ch;
    cin>>n>>k;
    cin>>s;
    for(int i=0; i<k; i++){
        cin>>ch;
        arr[ch-97] = 1;
    }
    ll ans=0,temp=0;
    for(int i=0; i<s.length(); i++){
        if(arr[s[i]-97] == 1){
            temp++;
        }
        else{
            ans += (temp*(temp+1))/2;
            temp = 0;
        }
    }
    if(temp>0){
        ans += (temp*(temp+1))/2;
    }

    cout << ans << "\n";

    return 0;
}