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

int a[30][30];
int dist[30][30];
bool visited[30][30];
int n,m;

bool isValid(int x,int y){
    if(x < 1 || x > n || y < 1 || y > m)    //if the cell is outside of grid
    return false;

    if(visited[x][y] == 1 || a[x][y] == 0)  //if the cell is already visited
    return false;

    return true;
}

void bfs(int srcX,int srcY){
    queue< pair<int,int> > q;
    q.push({srcX,srcY});
    visited[srcX][srcY] = 1;
    dist[srcX][srcY] = 0;   //distance of source to source  = 0

    while(!q.empty()){
        int currX = q.front().first;
        int currY = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){     //check all adjacent cell
            if(isValid(currX + dx[i] , currY + dy[i])){
                int newX = currX + dx[i];
                int newY = currY + dy[i];

                dist[newX][newY] = dist[currX][currY] + 1;  //update distance
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
    while(t--){
        clr(dist);
        clr(visited);
        cin>>n>>m;
        char x;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>x;
                if(x == '.')
                    a[i][j] = 1;
                else
                    a[i][j] = 0;
            }
        }

        int start_x = -1, start_y = -1, end_x, end_y;

        if(n == 1){
            int cnt=0;
            for(int i=1; i<=m; i++){
                if(a[1][i] == 1){
                    cnt++;
                    if(start_x == -1 && start_y == -1)
                        start_x = 1, start_y = i;
                    else
                        end_x = 1, end_y = i;
                }
            }
            if(cnt != 2){
                printf("invalid\n");
            }
            else{
                clr(dist);
                clr(visited);
                bfs(start_x,start_y);
                if(dist[end_x][end_y] != 0){
                    printf("valid\n");
                }
                else{
                    printf("invalid\n");
                }
            }
            continue;
        }

        if(m == 1){
            int cnt=0;
            for(int i=1; i<=n; i++){
                if(a[i][1] == 1){
                    cnt++;
                    if(start_x == -1 && start_y == -1)
                        start_x = i, start_y = 1;
                    else
                        end_x = i, end_y = 1;
                }
            }
            if(cnt != 2){
                printf("invalid\n");
            }
            else{
                clr(dist);
                clr(visited);
                bfs(start_x,start_y);
                if(dist[end_x][end_y] != 0){
                    printf("valid\n");
                }
                else{
                    printf("invalid\n");
                }
            }
            continue;
        }

        int cnt = 0;
        for(int i=1; i<=m; i++){
            if(a[1][i] == 1){
                cnt++;
                if(start_x == -1 && start_y == -1)
                    start_x = 1, start_y = i;
                else
                    end_x = 1, end_y = i;
            }
        }
        for(int i=1; i<=m; i++){
            if(a[n][i] == 1){
                cnt++;
                if(start_x == -1 && start_y == -1)
                    start_x = n, start_y = i;
                else
                    end_x = n, end_y = i;
            }
        }
        for(int i=2; i<=n-1; i++){
            if(a[i][1] == 1){
                cnt++;
                if(start_x == -1 && start_y == -1)
                    start_x = i, start_y = 1;
                else
                    end_x = i, end_y = 1;
            }
        }
        for(int i=2; i<=n-1; i++){
            if(a[i][m] == 1){
                cnt++;
                if(start_x == -1 && start_y == -1)
                    start_x = i, start_y = m;
                else
                    end_x = i, end_y = m;
            }
        }

        if(cnt != 2){
            printf("invalid\n");
        }
        else{
            clr(dist);
            clr(visited);
            bfs(start_x,start_y);
            if(dist[end_x][end_y] != 0){
                printf("valid\n");
            }
            else{
                printf("invalid\n");
            }
        }
    }

    return 0;
}