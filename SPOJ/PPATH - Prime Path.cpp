#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

bitset <10005> bs;
vector <int> prime;

vector <int> adj[10005];
bool visited[10005];
int dis[10005];     //dis[i] is the shortest path of i'th node from source

void bfs(int source){   //source node
    queue <int> q;
    q.push(source);
    visited[source] = true;
    dis[source] = 0;    //distance from source to source = 0

    while(!q.empty()){
        int curr = q.front();   //current node
        q.pop();

        for(int i=0; i<adj[curr].size(); i++){  //traverse all the adjacent nodes of current node
            int child = adj[curr][i];
            if(!visited[child]){
                q.push(child);
                dis[child] = dis[curr] + 1;
                visited[child] = true;
            }
        }
    }
}

void sieve()
{
    bs.set();
    bs[0] = bs[1] = 0;
    for(long long int i=3; i<=10005; i+=2)
    {
        if(bs[i])
        {
            for(long long int j=i*i; j<=10005; j+=i)
            {
                bs[j]=0;
            }
            if(i>=1000)
            prime.push_back((int)i);
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve();
    int len = prime.size();

    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            int tmp1 = prime[i], tmp2 = prime[j] , cnt=0;
            while(tmp1 > 0){
                int d1 = tmp1%10, d2 = tmp2%10;
                if(d1 != d2)cnt++;
                tmp1 /= 10, tmp2 /= 10;
            }
            if(cnt == 1){       //if difference between two number is 1 digit
                adj[prime[i]].push_back(prime[j]);
                adj[prime[j]].push_back(prime[i]);
            }
        }
    }

    int t;
    cin>>t;

    while(t--){
        memset(visited,0,sizeof(visited));
        memset(dis,0,sizeof(dis));

        int src,des;
        cin>>src>>des;

        bfs(src);

        cout << dis[des] << "\n";
    }



    return 0;
}