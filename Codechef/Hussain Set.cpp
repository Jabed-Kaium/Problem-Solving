#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

ll n,m,x,ans,temp,idx=1;
ll arr[1000005];

queue<ll> p;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    for(ll i=0; i<n; i++)cin>>arr[i];

    sort(arr,arr+n);

    ll end = n-1;

    while(m--){
        cin>>x;
        for( ; idx<=x; idx++){
            if(p.size() != 0){
                if(end >= 0 && arr[end] > p.front()){
                    ans = arr[end--];
                }
                else{
                    ans = p.front();
                    p.pop();
                }
                temp = ans>>1;
                if(temp>0)p.push(temp);
            }
            else{
                ans = arr[end--];
                temp = ans>>1;

                if(temp>0)p.push(temp);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}