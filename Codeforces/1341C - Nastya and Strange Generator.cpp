#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,temp,max;
        cin>>n;
        int r[n+5],hash[n+5],cnt[n+5],final[n+5];

        for(int i=1; i<=n; i++){
            cin>>r[i];
            cnt[i]=1;
            hash[r[i]]=i;
        }

        for(int i=1; i<=n; i++){
            if(i==1){
                final[hash[i]] = i;
                cnt[hash[i]] = 0;
                cnt[hash[i]+1] += 1;
                temp = hash[i];
                continue;
            }

            if(cnt[temp+1]>1 && temp+1<=n){
                final[temp+1]=i;
                cnt[temp+1]=0;
                cnt[temp+2]+=1;
                temp += 1;
            }
            else{
                final[hash[i]]=i;
                cnt[hash[i]]=0;
                cnt[hash[i]+1]+=1;
                temp=hash[i];
            }
        }
        bool checker = false;
        for(int i=1; i<=n; i++){
            if(r[i]!=final[i]){
                checker=true;
                break;
            }
        }
        if(checker==false)cout<<"Yes\n";
        else cout<<"No\n";

    }

    return 0;
}