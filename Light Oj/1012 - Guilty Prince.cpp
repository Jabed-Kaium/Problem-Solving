#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

int n,m,a,b,cc;
char ch;
int ar[1001][1001];
bool visited[1001][1001];

bool isValid(int x,int y){
    if(x < 1 || x > n || y < 1 || y > m)
    return false;

    if(visited[x][y] == true || ar[x][y] == 0)
    return false;

    return true;
}

int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};

void dfs(int x,int y){
    visited[x][y] = 1;

    for(int i=0; i<4; i++){
        if(isValid(x + dx[i] , y + dy[i]))
        dfs(x + dx[i] , y + dy[i]) , cc++;
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
    for(int tt=1; tt<=t; tt++){
        memset(visited,0,sizeof(visited));

        cin>>m>>n;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>ch;
                if(ch == '.')ar[i][j] = 1;
                else if(ch == '@'){
                    ar[i][j] = 1;
                    a = i,b = j;
                }
                else{
                    ar[i][j] = 0;
                }
            }
        }

        cc = 1;

        dfs(a,b);

        cout << "Case " << tt << ": " << cc << "\n";
    }

    return 0;
}