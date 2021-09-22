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

const int mx = 10010;
const int INF = 1000000000;

vector<pair<int,int> > vec[mx],rev[mx];
bool vis[mx];
int dis1[mx],dis2[mx];
int n,m,s,t,total,ans = -1;

void dijkstra(int src,int type){
	clr(vis);
    if(!type) dis1[src] = 0;
    else dis2[src] = 0;

    priority_queue <pair<int,int> > pqq;
    pqq.push({0,src});

    while(!pqq.empty()){
        int node = pqq.top().second;
        pqq.pop();
		if(vis[node] == 1)continue;
		vis[node] = 1;
        if(!type){
            for(int i=0; i<vec[node].size(); i++){
                int b = vec[node][i].first , w = vec[node][i].second;
                if(dis1[b] > dis1[node] + w){
                    dis1[b] = dis1[node] + w;
                    pqq.push({-dis1[b],b});
                }
            }
        }
        else{
            for(int i=0; i<rev[node].size(); i++){
                int b = rev[node][i].first , w = rev[node][i].second;
                if(dis2[b] > dis2[node] + w){
                    dis2[b] = dis2[node] + w;
                    pqq.push({-dis2[b],b});
                }
            }
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    fastio
    
    int tc;
    cin>>tc;
    for(int tt=1; tt<=tc; tt++){

        for(int i=0; i<mx; i++){
            dis1[i] = INF;
            dis2[i] = INF;
        }

        cin>>n>>m>>s>>t>>total;

        while(m--){
            int a,b,w;
            cin>>a>>b>>w;
            vec[a].pb({b,w});
            rev[b].pb({a,w});
        }

        dijkstra(s,0);
        dijkstra(t,1);

        for(int i=1; i<=n; i++){
            for(int j=0; j<vec[i].size(); j++){
                int b = vec[i][j].first , w = vec[i][j].second;
                if(dis1[i] + dis2[b] + w <= total){
                    ans = max(ans,w);
                }
            }
        }

        cout << "Case " << tt << ": " << ans << "\n";

        for(int i=0; i<mx; i++){
            vec[i].clear();
            rev[i].clear();
        }
        ans = -1;
    }

    return 0;
}