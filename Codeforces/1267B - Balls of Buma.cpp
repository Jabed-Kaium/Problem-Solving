#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    vector<pair<int,char> > v;

    cin>>s;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==s[i+1]){
            cnt++;
        }
        else{
            cnt++;
            v.push_back(make_pair(cnt,s[i]));
            cnt=0;
        }
    }

    if(v.size()%2==0){
        cout<<"0\n";
    }
    else{
        int mid = v.size()/2;
        if(v[mid].first < 2){
            cout<<"0\n";
        }
        else{
            bool flag = false;
            for(int i=1; mid-i>=0; i++){
                if(v[mid-i].second != v[mid+i].second || v[mid-i].first + v[mid+i].first < 3){
                    flag = true;
                    break;
                }
            }
            if(flag==false){
                cout<<v[mid].first + 1<<"\n";
            }
            else{
                cout<<"0\n";
            }
        }
    }

    return 0;
}