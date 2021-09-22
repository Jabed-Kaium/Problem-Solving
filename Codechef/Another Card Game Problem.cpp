#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define pi acos(-1)

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int pc,pr,c,r;
        cin>>pc>>pr;

        if(pc % 9 == 0){
            c = pc/9;
        }
        else{
            c = (pc/9)+1;
        }

        if(pr % 9 == 0){
            r = pr/9;
        }
        else{
            r = (pr/9)+1;
        }

        if(c < r){
            cout << "0 " << c << "\n";
        }
        else{
            cout << "1 " << r << "\n";
        }
    }

    return 0;
}