#include<bits/stdc++.h>
using namespace std;
#define int         long long
#define endl        "\n"
#define ff          first
#define ss          second
#define pb          push_back
#define mp          make_pair
#define yes         cout<<"YES\n"
#define no          cout<<"NO\n"
#define clr(a)      memset(a,0,sizeof(a))
#define reset(a)    memset(a,-1,sizeof(a))
#define mod         1000000007
#define pi          acos(-1)
#define fastio      ios_base::sync_with_stdio(false);cin.tie(NULL);

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// for chess knight move
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int n;
int a[105][105];
int row[105],col[105];

signed main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    while(cin>>n){
        if(n==0)
            break;

        clr(row);
        clr(col);

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin>>a[i][j];
            }
        }

        for(int i=1; i<=n; i++){
            int sum=0;
            for(int j=1; j<=n; j++){
                sum += a[i][j];
            }
            row[i]=sum;
        }

        for(int j=1; j<=n; j++){
            int sum=0;
            for(int i=1; i<=n; i++){
                sum += a[i][j];
            }
            col[j]=sum;
        }

        int cnt=0,bit1=-1,bit2=-1;
        bool flag = true;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(row[i]%2==0 && col[j]%2==0)
                    continue;
                if(row[i]%2!=0 && col[j]%2!=0){
                    cnt++;
                    flag=false;
                    bit1 = i, bit2 = j;
                    continue;
                }
                if((row[i]%2!=0 && col[j]%2==0) || (row[i]%2==0 && col[j]%2!=0)){
                    flag = false;
                    continue;
                }
            }
        }

        if(flag == true){
            cout << "OK\n";
        }
        else{
            if(cnt==1){
                cout << "Change bit (" << bit1 << "," << bit2 << ")\n";
            }
            else{
                cout << "Corrupt\n";
            }
        }
    }

    return 0;
}