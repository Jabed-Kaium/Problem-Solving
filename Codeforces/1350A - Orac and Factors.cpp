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

bitset<1000005> bs;

void sieve(long long int upper_Bound)
{
    bs.set();
    bs[0] = bs[1] = 0;
    for(long long int i=3; i*i<=upper_Bound+1; i+=2)
    {
        if(bs[i])
        {
            for(long long int j=i*i; j<=upper_Bound+1; j+=i)
            {
                bs[j]=0;
            }
        }
    }
}


int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve(1000005);

    ll t,n,k,ans;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n%2==0){
            ans = n + (k*2);
        }
        else{
            if(bs[n]==1){
                ans = n+n;
                k--;
                ans += (k*2);
            }
            else{
                for(int i=3; i<=sqrt(n)+1; i+=2){
                    if(n%i==0){
                        ans = n+i;
                        k--;
                        ans += (k*2);
                        break;
                    }
                }
            }
        }

        cout<<ans<<endl;
    }
    

    return 0;
}