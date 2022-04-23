#include<bits/stdc++.h>
using namespace std;
#define int         long long
#define endl        "\n"
#define ff          first
#define ss          second
#define pb          push_back
#define mp          make_pair
#define yes         cout<<"YES\n"
#define no          cout<<"NO\n"
#define clr(a)      memset(a,0,sizeof(a))
#define reset(a)    memset(a,-1,sizeof(a))
#define mod         1000000007
#define pi          acos(-1)
#define fastio      ios_base::sync_with_stdio(false);cin.tie(NULL);

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// for chess knight move
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

const int N = 20000005;
bool mark[N];
vector<int>prime;
vector< pair<int,int> > twin;

void sieve()
{
    for(int i=2; i*i<=N; i++){
        if(!mark[i]){
            for(int j=2*i; j<=N; j+=i)
                mark[j]=1;
        }
    }

    for(int i=2; i<N; i++){
        if(!mark[i])
            prime.pb(i);
    }
}

void pairPrime()
{
    int sz = prime.size();
    for(int i=0; i<sz-1; i++){
        if(prime[i+1]-prime[i] == 2){
            twin.pb({prime[i],prime[i+1]});
        }
    }
}

signed main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    sieve();
    pairPrime();

    int n;
    while(cin>>n){
        cout << "(" << twin[n-1].ff << ", " << twin[n-1].ss << ")" << "\n";
    }

    return 0;
}