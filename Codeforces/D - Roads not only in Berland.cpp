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

const int MX = 1005;
int par[MX];
set<pair<int,int> > build , close;

int findpar(int n){
    if(n == par[n])return n;
    else return par[n] = findpar(par[n]);
}

void Union(int a,int b){
    int pa = findpar(a);
    int pb = findpar(b);

    if(pa != pb){
        par[pb] = pa;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fastio
    
    int n;
    cin>>n;
    for(int i=0; i<=n; i++)par[i] = i;
    int tmp = n-1;
    while(tmp--){
        int a,b;
        cin>>a>>b;
        int pa = findpar(a) , pb = findpar(b);
        if(pa == pb)close.insert({a,b});
        else{
            Union(a,b);
        }
    }

    int pa = findpar(1);
    for(int i=2; i<=n; i++){
        int pb = findpar(i);
        if(pa != pb)build.insert({pa,pb});
        par[pb] = pa;
    }

    cout << build.size() << "\n";
    for(auto p = close.begin(),q = build.begin() ; p != close.end(); p++,q++){
        cout << p->first << " " << p->second << " " << q->first << " " << q->second << "\n";
    }

    return 0;
}