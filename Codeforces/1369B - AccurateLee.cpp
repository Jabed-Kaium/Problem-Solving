#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int a[100005];

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    string s;
    cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        int one = 0;
        cin>>n;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '0'){
                a[i] = 0;
            }else{
                a[i] = 1;
            }
        }
        for(int i=0; i<n; i++){
            if(a[i]==1)one++;
        }
        int i,j;
        bool flag = true;
        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                flag = false;
                break;
            }
        }
        if(flag == true){
            for(int i=0; i<n; i++){
                cout<<a[i];
            }
            cout << '\n';
            continue;
        }
        for(i=n-1,j=n-2; i>=0 && one>0; ){
            if(a[i] == 1 && a[j] == 1){
                i--;
                j--;
                one--;
            }
            else if(a[i] == 1 && a[j] == 0){
                one--;
                i--;
                j--;
            }
            else if(a[i] == 0 && a[j] == 1){
                a[j] = -1;
                j--;
                one--;
            }
            else if(a[i] == 0 && a[j] == 0){
                if(one>0){
                    a[i] = -1;
                    i=j;
                    j--;
                }
            }
        }

        for(int i=0; i<n; i++){
            if(a[i] != -1)cout<<a[i];
        }
        cout << "\n";
    }
    
    return 0;
}