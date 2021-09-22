#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define clr(a) memset(a,0,sizeof(a))
#define reset(a) memset(a,-1,sizeof(a))
#define mod 1000000007
#define pi acos(-1)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

// ll dx[] = { -1 , 0 , 1 , 0};
// ll dy[] = {0 , 1 , 0 , -1};

// //for chess knight move
// ll dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// ll dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

const int N = 5005;
vector< pair<int,int> > vec[N];
bool vis[N];
int d1[N] , d2[N];

void dijkstra(int src , int n)
{
    for(int  i = 1 ; i<=n ; i++){
        vis[i] = 0;
        d1[i] = INT_MAX;
    }

    d1[src] = 0;
    priority_queue < pair < int , int > > pqq;
    pqq.push({0,src});
    while(!pqq.empty()){
        pair < int , int > p = pqq.top();
        pqq.pop();
        int a = p.second;
        if(vis[a] == 1) continue;
        vis[a] = 1;
        for(auto p:vec[a]){
            int b = p.first , w = p.second;
            int val = d1[a] + w;
            if(val < d1[b]){
                d1[b] = val;
                pqq.push(make_pair(-d1[b],b));
            }
        }
    }
}


int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	fastio

	int t;
	cin>>t;
	for(int tc=1; tc<=t; tc++){
		for(int i=0; i<N; i++){
			vec[i].clear();
		}
		int n,r;
		cin>>n>>r;
		int a,b,w;
		while(r--){
			cin>>a>>b>>w;
			vec[a].pb({b,w});
			vec[b].pb({a,w});
		}
		
		dijkstra(1,n);
		for(int i=1; i<=n; i++)
		d2[i] = d1[i];
		dijkstra(n,n);

		int ans = INT_MAX;
		for(int i=1; i<=n; i++){
			for(auto x : vec[i]){
				int d = d2[i] + d1[x.ff] + x.ss;
				if(d > d2[n]){
					ans = min(ans , d);
				}
			}
		}


		cout << "Case " << tc << ": " << ans << "\n";

	}

	return 0;
}