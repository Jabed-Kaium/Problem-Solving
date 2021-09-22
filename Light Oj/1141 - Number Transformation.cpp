#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define clr(a) memset(a,0,sizeof(a))
#define reset(a) memset(a,-1,sizeof(a))
#define mod 1000000007
#define pi acos(-1)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};

vector<int> vec[1005];
bool vis[1005];
int dis[1005];

bitset <10000> bs;
vector <int> prime;

void sieve(long long int upper_Bound)
{
    bs.set();
    bs[0] = bs[1] = 0;
    prime.push_back(2);
    for(long long int i=3; i<=upper_Bound+1; i+=2)
    {
        if(bs[i])
        {
            for(long long int j=i*i; j<=upper_Bound+1; j+=i)
            {
                bs[j]=0;
            }
            prime.push_back((int)i);
        }
    }
}

void bfs(int src){
    queue<int>q;
    q.push(src);
    dis[src] = 0;
    vis[src] = 1;

    while(!q.empty()){
        int a = q.front();
        q.pop();

        for(int i=0; i<vec[a].size(); i++){
            int p = vec[a][i];
            if(vis[p] == 0){
                dis[p] = dis[a] + 1;
                vis[p] = 1;
                q.push(p);
            }
        }
    }
        
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    fastio

    sieve(1005);

    int sz = prime.size();

    for(int i=1; i<=1000; i++){
        for(int j=0; j<sz; j++){
            if(i%prime[j] == 0){
                if(prime[j] != i && i+prime[j]<=1000)
                vec[i].pb(i+prime[j]);
            }
        }
    }
    
    int tc;
    cin>>tc;
    for(int tt=1; tt<=tc; tt++){
        clr(vis);
        reset(dis);

        int src,tar;
        cin>>src>>tar;
        bfs(src);

        printf("Case %d: %d\n", tt,dis[tar]);

    }

    return 0;
}