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

int mark[1005];
vector<int> prime;

void sieve(int n){
    clr(mark);
    prime.clear();

    for(int i=2; i*i<=n; i++){
        if(mark[i]==0){
            for(int j=2*i; j<=n; j+=i){
                mark[j]=1;
            }
        }
    }

    for(int i=1; i<=n; i++){
        if(mark[i]==0)
            prime.pb(i);
    }
}

signed main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int n,c,id=0;
    while(cin>>n>>c){
        sieve(n);
        int size = prime.size();

        if(c > size/2 + 1){
            cout << n << " " << c << ":";
            for(int i=0; i<size; i++){
                cout << " " << prime[i];
            }
            cout << "\n\n";
        }
        else{
            cout << n << " " << c << ":";
            if(size%2==0){
                int flag=0;
                int cnt = size - 2*c;
                cnt/=2;
                for(int i=0; i<size; i++){
                    if(cnt>0){
                        cnt--;
                        continue;
                    }
                    cout << " " << prime[i];
                    flag++;
                    if(flag == 2*c)break;
                }
                cout << "\n\n";
            }
            else{
                int flag=0;
                int cnt = size - (2*c - 1);
                cnt/=2;
                for(int i=0; i<size; i++){
                    if(cnt>0){
                        cnt--;
                        continue;
                    }
                    cout << " " << prime[i];
                    flag++;
                    if(flag == 2*c - 1)break;
                }
                cout << "\n\n";
            }
        }
        id++;
    }

    return 0;
}