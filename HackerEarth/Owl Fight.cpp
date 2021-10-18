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
     
    const int MAX = 100005;
    int par[MAX];
    int n,m,a,b,q;
     
    int findpar(int n){
        if(par[n] < 0) return n;
        else return par[n] = findpar(par[n]);
    }
     
    void Union(int a,int b){
        a = findpar(a);
        b = findpar(b);
     
        if(a == b)return;
        else{
            par[a] = min(par[a],par[b]);
            par[b] = a;
        }
    }
     
    int main()
    {
        // #ifndef ONLINE_JUDGE
        //     freopen("input.txt", "r", stdin);
        //     freopen("output.txt", "w", stdout);
        // #endif
     
        fastio
        
        for(int i=1; i<=MAX; i++)par[i] = -i;
        cin>>n>>m;
        while(m--){
            cin>>a>>b;
            Union(a,b);
        }
     
        cin>>q;
        while(q--){
            cin>>a>>b;
            int par_a = findpar(a);
            int par_b = findpar(b);
     
            if(par_a == par_b){
                cout << "TIE\n";
            }
            else{
                if(par[par_a] < par[par_b])
                    cout << a << "\n";
                else
                    cout << b << "\n";
            }
        }
     
        return 0;
    }