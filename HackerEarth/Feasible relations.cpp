#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

vector <int> adj[1000001];
bool visited[1000001];
int cc[1000001];
int curr_cc;

void dfs(int node){
    visited[node] = 1;
    cc[node] = curr_cc;

    for(int i=0; i<adj[node].size(); i++){
        int child = adj[node][i];
        if(visited[child] == 0){
            dfs(child);
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--){
        for(int i=0; i<1000001; i++){
            adj[i].clear();
            visited[i] = 0 , cc[i] = 0;
        }

        int n,k,a,b;
        string op;
        vector <pair<int,int> > query;
        curr_cc = 0;

        cin>>n>>k;

        while(k--){
            cin>>a>>op>>b;

            if(op == "="){
                adj[a].push_back(b) , adj[b].push_back(a);
            }
            else{
                query.push_back({a,b});
            }
        }

        for(int i=1; i<=n; i++){
            if(visited[i] == 0){
                curr_cc++;
                dfs(i);
            }
        }

        bool flag = true;

        for(int i=0; i<query.size(); i++){
            a = query[i].first;
            b = query[i].second;

            if(cc[a] == cc[b]){
                flag = false;
                break;
            }
        }

        if(flag){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }

    return 0;
}