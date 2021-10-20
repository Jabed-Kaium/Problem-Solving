#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,result="";

    cin>>a;
    cin>>b;
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]){
            result+="1";
        }
        else result+="0";
    }
    cout<<result<<"\n";
    
    return 0;
}