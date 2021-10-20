#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int a[1005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <int> v;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '(')a[i] = 0;
        else a[i] = -1;
    }

    for(int i=0; i<s.length(); i++){
        if(a[i] == 0){
            for(int j=s.length()-1; j>i; j--){
                if(a[j] == -1){
                    v.pb(i+1);
                    v.pb(j+1);
                    a[i] = 1;
                    a[j] = 1;
                    break;
                }
            }
        }
    }

    if(v.size() == 0){
        cout << "0\n";
    }
    else{
        sort(v.begin(),v.end());
        cout<<"1\n";
        cout<<v.size()<<"\n";
        for(int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}