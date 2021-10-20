#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t;
    int j=1,cntt=0;
    map<int,int> mp;
    map<int,int>::iterator it;
    while(cntt<MAX){
        cntt=0;
        for(int i=1; i<=j; i++){
            if(i==j)cntt+=(i*2);
            else{
                cntt+=(i*2)+i;
            }
        }
        mp[j]=cntt;
        j++;
    }

    cin>>t;
    while(t--){
        cin>>n;
        int cnt=0;
        while(n>1){
            it = mp.begin();
            while(it->second <= n){
                it++;
            }
            --it;
            cnt++;
            n -= it->second;
        }

        cout<<cnt<<"\n";
    }

    return 0;
}