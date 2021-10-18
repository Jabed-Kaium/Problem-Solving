//BFS on 2D Grid

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

int ar[1001][1001];
int dist[1001][1001];
int n;
bool visited[1001][1001];

bool isValid(int x,int y){
    if(x < 1 || x > n || y < 1 || y > n)
    return false;

    if(visited[x][y] == 1 || ar[x][y] == 0)
    return false;

    return true;
}

int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};

void bfs(int srcX,int srcY){
    queue < pair<int,int> > q;
    q.push({srcX , srcY});
    visited[srcX][srcY] = 1;
    dist[srcX][srcY] = 0;

    while(!q.empty()){
        int currX = q.front().first;
        int currY = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            if(isValid(currX + dx[i] , currY + dy[i])){
                int newX = currX + dx[i];
                int newY = currY + dy[i];

                dist[newX][newY] = dist[currX][currY] + 1;
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
    
    char ch;
    int sx,sy,ex,ey;

    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>ch;
            if(ch == 'T')ar[i][j] = 0;
            else if(ch == 'S'){
                ar[i][j] = 1;
                sx = i, sy = j;
            }
            else if(ch == 'E'){
                ar[i][j] = 1;
                ex = i, ey = j;
            }
            else{
                ar[i][j] = 1;
            }
        }
    }

    bfs(sx,sy);

    cout << dist[ex][ey] << "\n";

    return 0;
}