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
    
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    bool flag = true;
    for(int i=1; i<n; i++){
        if(v[i]<v[i-1]){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "yes\n";
        cout << "1 1\n";
        return 0;
    }

    int i,j;
    for(i=0; i<n-1; i++){
        if(v[i] > v[i+1])break;
    }
    for(j=i+1; j<n-1; j++){
        if(v[j] < v[j+1])break;
    }
    j++;
    sort(v.begin()+i , v.begin()+j);

    bool flag1 = true;
    for(int i=0; i<n-1; i++){
        if(v[i]>v[i+1]){
            flag1 = false;
            break;
        }
    }

    if(flag1){
        cout << "yes\n";
        cout << i+1 << " " << j << "\n";
    }
    else{
        cout << "no\n";
    }

    return 0;
}