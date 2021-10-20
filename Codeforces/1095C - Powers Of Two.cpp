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

    int n,k;
    multiset <int> s;

    cin>>n>>k;

    if(k>n || k<__builtin_popcount(n)){
        cout << "NO\n";
    }
    else{
        int temp = n,p=1;
        while(temp>0){
            if(temp&1){
                s.insert(p);
            }
            p *= 2;
            temp >>= 1;
        }
        while(s.size() < k){
            int x = *(--s.end());
            s.erase(--s.end());
            s.insert(x/2);
            s.insert(x/2);
        }
        if(s.size() > k){
            s.erase(--s.end());
        }

        cout << "YES\n";
        for(multiset<int>::iterator it = s.begin(); it!=s.end(); it++){
            cout << *it << " ";
        }
        cout << "\n";
    }

    return 0;
}