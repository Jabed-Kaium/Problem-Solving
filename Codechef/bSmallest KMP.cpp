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
    
    int t;
    cin>>t;

    while(t--){
        string text,pattern;
        cin>>text>>pattern;
        int t = text.length() , p = pattern.length();
        char ch = pattern[0];
        map<char,int> mp1,mp2;

        for(int i=0; i<t; i++){
            mp1[text[i]]++;
        }
        for(int i=0; i<p; i++){
            mp2[pattern[i]]++;
        }

        string ans1,ans2;

        for(char c = 'a'; c<=ch; c++){
            for(int i=0; i<mp1[c]-mp2[c]; i++){
                ans1 += c;
            }
        }
        ans1 += pattern;
        for(char c = ch+1; c<='z'; c++){
            for(int i=0; i<mp1[c]-mp2[c]; i++){
                ans1 += c;
            }
        }

        for(char c = 'a'; c<ch; c++){
            for(int i=0; i<mp1[c]-mp2[c]; i++){
                ans2 += c;
            }
        }
        ans2 += pattern;
        for(char c = ch; c<='z'; c++){
            for(int i=0; i<mp1[c]-mp2[c]; i++){
                ans2 += c;
            }
        }

        cout << min(ans1,ans2) << "\n";
    }

    return 0;
}