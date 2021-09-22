#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

// int dx[] = {-1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

int a,b,targetX,targetY;
int dist[10][10];
bool visited[10][10];

int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

bool isValid(int x,int y){
    if(x < 1 || x > 8 || y < 1 || y > 8)
    return false;

    if(visited[x][y] == 1)
    return false;

    return true;
}

int bfs(int srcX,int srcY){
    queue < pair<int,int> > q;
    q.push({srcX,srcY});
    visited[srcX][srcY] = 1;
    dist[srcX][srcY] = 0;

    if(srcX == targetX && srcY == targetY)return dist[srcX][srcY];

    while(!q.empty()){
        int currX = q.front().first;
        int currY = q.front().second;
        q.pop();

        for(int i=0; i<8; i++){
            if(isValid(currX + dx[i] , currY + dy[i])){
                int newX = currX + dx[i];
                int newY = currY + dy[i];

                dist[newX][newY] = dist[currX][currY] + 1;
                visited[newX][newY] = 1;
                q.push({newX , newY});

                if(newX == targetX &&  newY == targetY)return dist[newX][newY];
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
    while(t--){
        memset(dist,0,sizeof(dist));
        memset(visited,0,sizeof(visited));

        string s1,s2;   //source cell & target cell
        cin>>s1>>s2;    //i.e g8,f6

        a = s1[0]- 'a' + 1, b = s1[1] - '0';
        targetX = s2[0]- 'a' + 1, targetY = s2[1] - '0';

        cout << bfs(a,b) << "\n";
    }

    return 0;
}