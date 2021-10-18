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

const int eps = 1e-9;
const int nx = 200005 , mx = 500005;
vector<int> vec[nx];
int in[nx] , out[nx];
double pro[nx];

void toposort(int n){
    queue<int> q;
    for(int i=1; i<=n; i++){
        if(in[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int a = q.front();
        q.pop();

        for(int b : vec[a]){
            pro[b] += pro[a]*1.0 / out[a];
            in[b]--;
            if(in[b] == 0)q.push(b);
        }
    }

    double maxi = 0;
    for(int i=1; i<=n; i++){
        if(out[i] == 0 && pro[i]>maxi)maxi=pro[i];
    }
    for(int i=1; i<=n; i++){
        if(out[i] == 0 && abs(pro[i] - maxi) <= eps)cout << i << " ";
    }
    cout << "\n";
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    fastio
    
    int n,m,r,a,b;
    cin>>n>>m>>r;
    while(m--){
        cin>>a>>b;
        vec[a].pb(b);
        in[b]++;
        out[a]++;
    }

    pro[r] = 1;

    toposort(n);
    
    return 0;
}