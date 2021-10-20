#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    string s,s1,s2;
    deque <string> first;
    deque <string> middle;
    deque <string> last;
    multiset <string> v;
    multiset <string>:: iterator it,iit;
    deque <string>::iterator it1;
    cin>>n>>m;
    while(n--){
        cin>>s;
        v.insert(s);
    }
    for(it = v.begin(); it!=v.end(); it++){
        s1 = *it;
        s2 =s1;
        reverse(s2.begin(),s2.end());

        iit = v.find(s2);

        if(iit!=v.end() && iit!=it){
            first.pb(s1);
            last.pf(s2);
            v.erase(iit);
        }
        else{
            if(s1 == s2 && middle.size() == 0){
                middle.pb(s1);
            }
        }
    }

    if(first.size() == 0 && middle.size() == 0 && last.size() == 0){
        cout << "0\n";
        cout << "\n";
    }
    else{
        string ans = "";
        for(it1 = first.begin(); it1!=first.end(); it1++){
            ans += (*it1);
        }
        for(it1 = middle.begin(); it1!=middle.end(); it1++){
            ans += (*it1);
        }
        for(it1 = last.begin(); it1!=last.end(); it1++){
            ans += (*it1);
        }

        cout << ans.length() << "\n";
        cout << ans << "\n";
    }

    
    return 0;
}