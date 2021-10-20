#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int t;
    cin>>t;
    while(t--){
        set<char>letter;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            int cnt=1;
            int temp = i;
            while(s[i+1]==s[i]){
                cnt++;
                i++;
            }
            if(cnt%2!=0){
                letter.insert(s[temp]);
            }
        }
        for(set<char>::iterator it = letter.begin(); it!=letter.end(); it++){
            cout<<*it;
        }
        cout<<"\n";
    }
    return 0;
}