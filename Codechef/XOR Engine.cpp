#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,n,q;
    cin>>t;
    while(t--){
        cin>>n>>q;
        int a[n+5];
        int b[n+5];
        int p,even=0,odd=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            int x = __builtin_popcount(a[i]);   //number of set bits in a[i]
            if(x%2==0)even++;   //number of elements which has even number of set bits
            else odd++;     //number of elements which has odd number of set bits
        }
        while(q--){
            cin>>p;
            int y = __builtin_popcount(p);
            if(y%2==0){             //if p has even number of set bits,after XOR operation every element has set bit same as before
                cout << even << " " << odd << "\n";
            }
            else{                   //if p has odd number of set bits,after XOR-ing the element which has even will have odd,which has odd will have even set bits
                cout << odd << " " << even << "\n";
            }
        }
        
    }

    return 0;
}