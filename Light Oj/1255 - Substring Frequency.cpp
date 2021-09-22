//KMP problem

#include<bits/stdc++.h>
using namespace std;

vector<int> constructTempArray(string pattern)
{
    vector <int> lps(pattern.length());
    int index = 0;
    lps[0]=0;
    for(int i=1; i<(int)pattern.length(); ){
        if(pattern[i]==pattern[index]){
            lps[i]=index+1;
            ++index;
            ++i;
        }
        else{
            if(index!=0) index = lps[index-1];
            else{
                lps[i]=index;
                ++i;
            }
        }
    }

    return lps;
}

int KMP_multipletimes(string text,string pattern)
{
    vector <int> lps = constructTempArray(pattern);
    int i=0,j=0;
    int count=0;

    //i-->text, j-->pattern

    while(i < (int)text.length()){
        if(text[i] == pattern[j]){
            ++i;
            ++j;
        }
        else{
            if(j!=0) j = lps[j-1];
            else ++i;
        }

        if(j == (int)pattern.length()){
            ++count;
        }
    }

    return count;
}

int main()
{
    int t;
    string text,pattern;
    cin>>t;
    cin.ignore();
    for(int i=1; i<=t; i++){
        getline(cin,text);
        getline(cin,pattern);
        int count = KMP_multipletimes(text,pattern);
        printf("Case %d: %d\n", i,count);
    }

    return 0;
}