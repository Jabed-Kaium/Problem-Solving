#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){

        string a,b;

        cin>>a;
        cin>>b;

        int j;
        for(j=b.length()-1; b[j]!='1'; j--){
            
        }

        j = a.length() - (b.length()-j);
        int x = 0;

        for(int i=j ; a[i]!='1'; i--){
            x++;
        }

        cout << x << "\n";
    }

    return 0;
}