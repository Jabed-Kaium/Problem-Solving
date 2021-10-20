#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define ff first
#define ss second
#define sc(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define fo(i,n) for(int i=0; i<n; i++)
#define foo(i,n) for(int i=1; i<=n; i++)
#define FO(a,b) for(int i=a; i<=b; i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define pqf priority_queue<int>
#define pqr priority_queue<int,vi,greater<int> >
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)  //number of zeroes before first set bit
#define mod 1000000007
#define pi acos(-1)


int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll arr[n+1];
        set < pair<ll,pair<ll,ll> > > tree;
        tree.insert(mp(-n,mp(1,n))); //insertint first subarray
        ll no = 1;
        while(tree.size()>0){
            pair<ll,pair<ll,ll> > node = *tree.begin();
            ll l = node.ss.ff;
            ll r = node.ss.ss;
            tree.erase(node);

            if(l>r){
                continue;
            }
            if(l==r){
                arr[l] = no++;
                continue;
            }
            if((r-l+1)%2!=0){
                ll mid = (l+r)/2;
                arr[mid] = no++;
                tree.insert(mp(-(mid-l),mp(l,mid-1)));
                tree.insert(mp(-(r-mid),mp(mid+1,r)));
            }
            else{
                ll mid = (l+r-1)/2;
                arr[mid] = no++;
                tree.insert(mp(-(mid-l),mp(l,mid-1)));
                tree.insert(mp(-(r-mid),mp(mid+1,r)));
            }
        }

        for(ll i=1; i<=n; i++){
            cout<<arr[i]<<" ";
        }   
        cout<<endl;
    }
        
    return 0;
}