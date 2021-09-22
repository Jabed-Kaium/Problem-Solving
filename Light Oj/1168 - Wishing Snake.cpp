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

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// //for chess knight move
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

const int N = 10001;
stack<int> stk;
vector<int> vec[N] , tr[N] , ans[N];
int vis[N] , mark[N];
int id,cnt;

void dfs(int node){
    vis[node] = 1;
    for(int child : vec[node]){
        if(vis[child] == 0){
            dfs(child);
        }
    }
    stk.push(node);
}

void isValid(int node){
    vis[node] = 1;
    cnt++;
    for(int child : vec[node]){
        if(vis[child] == 0){
            isValid(child);
        }
    }
}

void dfs1(int node, int id){
    ans[id].pb(node);
    mark[node] = id;
    vis[node] = 1;
    for(int child : tr[node]){
        if(vis[child] == 0){
            dfs1(child,id);
        }
    }
}

void all_clear(){
    for(int i=0; i<N; i++){
        vec[i].clear();
        tr[i].clear();
        ans[i].clear();
    }
    clr(vis);
    clr(mark);
    while(!stk.empty()){
        stk.pop();
    }
}

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	//fastio

	int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        all_clear();
        id = cnt = 0;
        map<int,int> mpp;
        int n,e;
        cin>>n;
        while(n--){
            cin>>e;
            while(e--){
                int a,b;
                cin>>a>>b;
                vec[a].pb(b);
                tr[b].pb(a);
                mpp[a] = 1 , mpp[b] = 1;
            }
        }

        isValid(0);
        if(cnt != mpp.size()){
            cout << "Case " << tc << ": " << "NO\n";
            continue;
        }

        clr(vis);
        for(int i=0; i<1000; i++){
            if(vis[i] == 0){
                dfs(i);
            }
        }

        clr(vis);
        while(!stk.empty()){
            int u = stk.top();
            stk.pop();
            if(vis[u] == 0){
                id++;
                dfs1(u,id);
            }
        }

        bool flag = true;
        for(int i=1; i<=id; i++){
            int outgoing_edge = 0;
            for(int j=0; j<ans[i].size(); j++){
                int node = ans[i][j];
                for(int k=0; k<vec[node].size(); k++){
                    if(mark[vec[node][k]] != i)outgoing_edge++;
                }
            }
            if(outgoing_edge >= 2){
                cout << "Case " << tc << ": " << "NO\n";
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "Case " << tc << ": " << "YES\n";
        }
    }

	return 0;
}