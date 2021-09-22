/*
    Method : BFS on 2D Grid
    Call bfs 3 times for a,b,c cell.
    Maxmimum distance to home(tx,ty) among these 3 is the answer.
*/

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

int ar[25][25];
bool visited[25][25];
int dis[25][25];
int n,m,ans;

bool isValid(int x,int y){
    if(x < 1 || x > n || y < 1 || y > m)
    return false;

    if(visited[x][y] == 1 || ar[x][y] == 0)
    return false;

    return true;
}

void bfs(int x,int y){
    queue < pair<int,int> > q;
    visited[x][y] = 1;
    dis[x][y] = 0;
    q.push({x,y});

    while(!q.empty()){
        int currX = q.front().first;
        int currY = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            if(isValid(currX + dx[i] , currY + dy[i])){
                int newX = currX + dx[i];
                int newY = currY + dy[i];

                dis[newX][newY] = dis[currX][currY] + 1;
                visited[newX][newY] = 1;
                q.push({newX , newY});
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
    
    int t;
    cin>>t;
    for(int tt=1; tt<=t; tt++){
        clr(ar);
        clr(visited);
        int ax,ay,bx,by,cx,cy,tx,ty;
        char ch;
        cin>>n>>m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>ch;
                if(ch == '#' ||  ch == 'm')ar[i][j] = 0;
                else if(ch == 'a'){
                    ar[i][j] = 1;
                    ax = i, ay = j;
                }
                else if(ch == 'b'){
                    ar[i][j] = 1;
                    bx = i, by = j;
                }
                else if(ch == 'c'){
                    ar[i][j] = 1;
                    cx = i, cy = j;
                }
                else if(ch == 'h'){
                    ar[i][j] = 1;
                    tx = i, ty = j;
                }
                else{
                    ar[i][j] = 1;
                }
            }
        }

        int temp;
        ans = INT_MIN;

        clr(dis);
        clr(visited);
        bfs(ax,ay);
        temp = dis[tx][ty];

        ans = max(ans , temp);

        clr(dis);
        clr(visited);
        bfs(bx,by);
        temp = dis[tx][ty];

        ans = max(ans , temp);

        clr(dis);
        clr(visited);
        bfs(cx,cy);
        temp = dis[tx][ty];

        ans = max(ans , temp);

        printf("Case %d: %d\n", tt,ans);
    }

    return 0;
}