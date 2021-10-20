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

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        string s,w,e,sub;
        int n;
        cin>>n;
        cin>>s;

        for(int i=0; i<n; i++){
            w += '0';
            e += '1';
        }
        int sz = s.size();
        bool check = false;
        for(int i=0; i<sz-n+1; i++){
            bool flag=false;
            sub = s.substr(i,i+n);
            for(int j=0; j<sub.size(); j++){
                if(w[j] == sub[j])flag = true;
            }
            if(flag == false) check = true;
        }

        if(check)cout << e << "\n";
        else cout << w << "\n";
    }

    return 0;
}