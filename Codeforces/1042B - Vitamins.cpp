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

    int n,x;
    multiset <int> s[7];
    string str;
    bool a=false,b=false,c=false;

    cin>>n;
    while(n--){
        cin>>x>>str;
        sort(str.begin(), str.end());
        if(str == "A"){
            s[0].insert(x);
            a = true;
        }
        else if(str == "B"){
            s[1].insert(x);
            b = true;
        }
        else if(str == "C"){
            s[2].insert(x);
            c = true;
        }
        else if(str == "AB"){
            s[3].insert(x);
            a = true;
            b = true;
        }
        else if(str == "BC"){
            s[4].insert(x);
            b = true;
            c = true;
        }
        else if(str == "AC"){
            s[5].insert(x);
            a = true;
            c = true;
        }
        else if(str == "ABC"){
            s[6].insert(x);
            a = true;
            b = true;
            c = true;
        }
        
    }
    if(a == false || b == false || c == false){
        cout << "-1\n";
    }
    else{
        int t1=INT_MAX,t2=INT_MAX,t3=INT_MAX,t4=INT_MAX,t5=INT_MAX,t6=INT_MAX,t7=INT_MAX,t8=INT_MAX;

        if(s[6].size()!=0){
            t1 = *(s[6].begin());
        }
        if(s[0].size()!=0 && s[1].size()!=0 && s[2].size()!=0){
            t2 = *(s[0].begin()) + *(s[1].begin()) + *(s[2].begin());
        }
        if(s[0].size()!=0 && s[4].size()!=0){
            t3 = *(s[0].begin()) + *(s[4].begin());
        }
        if(s[1].size()!=0 && s[5].size()!=0){
            t4 = *(s[1].begin()) + *(s[5].begin());
        }
        if(s[2].size()!=0 && s[3].size()!=0){
            t5 = *(s[2].begin()) + *(s[3].begin());
        }
        if(s[3].size()!=0 && s[4].size()!=0){
            t6 = *(s[3].begin()) + *(s[4].begin());
        }
        if(s[4].size()!=0 && s[5].size()!=0){
            t7 = *(s[4].begin()) + *(s[5].begin());
        }
        if(s[3].size()!=0 && s[5].size()!=0){
            t8 = *(s[3].begin()) + *(s[5].begin());
        }

        int ans = min(t1,min(t2,min(t3,min(t4,min(t5,min(t6,min(t7,t8)))))));

        cout << ans << "\n";
    }

    return 0;
}