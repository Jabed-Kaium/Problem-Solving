#include<bits/stdc++.h>
using namespace std;
#define int long long
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

// for chess knight move
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int dx[] = {-1,-1,0,1,1,1,0,-1};
int dy[] = {0,1,1,1,0,-1,-1,-1};

char a[105][105];
bool vis[105][105];
int m,n,c;

bool isValid(int x,int y){
    if(x<1 || x>n || y<1 || y>m)
        return false;
    if(vis[x][y] == 1 || a[x][y]=='*')
        return false;

    return true;
}

void dfs(int x,int y){
    vis[x][y] = 1;

    for(int i=0; i<8; i++){
        if(isValid(x+dx[i],y+dy[i])){
            dfs(x+dx[i],y+dy[i]);
        }
    }
}

signed main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    fastio

    while(cin>>n>>m){
        if(n==0 && m==0)break;

        clr(vis);

        c=0;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>a[i][j];
            }
        }

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(!vis[i][j] && a[i][j]=='@'){
                    c++;
                    dfs(i,j);
                }
            }
        }

        cout << c << "\n";
    }

    return 0;
}