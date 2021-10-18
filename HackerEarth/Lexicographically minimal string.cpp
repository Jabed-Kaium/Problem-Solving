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

const int MX = 100005;
int par[MX];

int findpar(int n){
    if(n == par[n])return n;
    return par[n] = findpar(par[n]);
}

void connect(int a,int b){
    a = findpar(a) , b = findpar(b);
    if(a < b){
        par[b] = a;
    }
    else if(b < a){
        par[a] = b;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fastio

    for(int i=0; i<MX; i++)par[i] = i;
    
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    
    int len_a = a.length() , len_b = b.length() , len_c = c.length();
    for(int i=0; i<len_a; i++){
        connect(a[i]-97 , b[i]-97);
    }

    for(int i=0; i<len_c; i++){
        int temp = c[i]-97;
        int par = findpar(temp);
        if(par < temp){
            c[i] = par+97;
        }
    }

    cout << c << "\n";

    return 0;
}