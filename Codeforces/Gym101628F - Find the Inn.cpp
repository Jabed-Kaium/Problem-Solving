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

int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};

const int M = 30005;
ll MAXLL = 1e18+7;

vector <pair<ll,ll> > vec[M];
bool vis[M];
ll dis[M];
set<ll> s;
ll n,m,t,k,p;

void dijkstra(ll src){
    for(ll i=1; i<=n; i++){
        vis[i] = 0;
        dis[i] = MAXLL;
    }
    dis[src] = 0;
    priority_queue <pair<ll,ll> >pqq;
    pqq.push({0,src});

    while(!pqq.empty()){
        pair<ll,ll> p = pqq.top();
        pqq.pop();

        ll a = p.second;
        if(vis[a] == 1)continue;
        vis[a] = 1;
        for(ll i=0; i<vec[a].size(); i++){
            pair<ll,ll> p = vec[a][i];
            ll b = p.first , w = p.second;
            ll val = dis[a] + w;
            if(dis[b] > val){
                dis[b] = val;
                pqq.push({-dis[b],b});
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
    
    cin>>n>>m>>t>>k>>p;
    t *= 60;

    for(ll i=0; i<p; i++){
        ll x;
        cin>>x;
        s.insert(x);
    }

    while(m--){
        ll a,b,w;
        cin>>a>>b>>w;
        if(s.find(a) != s.end()){
            vec[a].pb({b,w*60 + k});
        }
        else{
            vec[a].pb({b,w*60});
        }
    }

    dijkstra(1);

    if(dis[n] <= t){
        cout << dis[n] << "\n";
    }
    else{
        cout << "-1\n";
    }

    return 0;
}