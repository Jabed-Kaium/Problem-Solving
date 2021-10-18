// Idea : DSU + reverse query

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

const int MX = 200005;
const int N = 100005;
int par[MX],total[MX],ans[MX];

int findpar(int n){
    if(n == par[n])return n;
    else return par[n] = findpar(par[n]);
}

void Union(int a,int b){
    int pa = findpar(a);
    int pb = findpar(b);

    if(pa != pb){
        par[pa] = pb;
        total[pb] += total[pa];
    }
}

int getCount(int n){
    int pa = findpar(n);
    return total[pa];
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fastio
    
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        string s,save;
        pair<int,int> q[N];
        cin>>s;
        save = s;
        int n = s.length();
        int query;
        cin>>query;
        for(int i=0; i<query; i++){
            cin>> q[i].first >> q[i].second;
            if(q[i].first == 2){
                s[q[i].second] = '#';
            }
        }

        for(int i=0; i<n; i++){
            par[i] = i;
            total[i] = 1;
            if(i>=1 && s[i]!='#' && s[i]==s[i-1]){
                Union(i,i-1);
            }
        }
        int a = 0;
        for(int i=query-1 ; i>=0; i--){
            if(q[i].first == 1){
                ans[a++] = getCount(q[i].second);
            }
            else{
                s[q[i].second] = save[q[i].second];
                if(q[i].second>=1 && s[q[i].second] == s[q[i].second - 1]){
                    Union(q[i].second , q[i].second - 1);
                }
                if(q[i].second < n-1 && s[q[i].second] == s[q[i].second + 1]){
                    Union(q[i].second , q[i].second + 1);
                }
            }
        }

        cout << "Case " << tc << ":\n";
        for(int i=a-1; i>=0; i--){
            cout << ans[i] << "\n";
        }
    }

    return 0;
}