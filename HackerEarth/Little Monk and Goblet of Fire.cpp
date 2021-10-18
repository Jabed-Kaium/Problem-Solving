#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> q1[5];
queue<ll>q;

int main()
{
    ll n,i,j,x,y,temp,temp1;
    cin>>n;
    while(n--){
        char ch;
        cin>>ch;
        if(ch=='E'){
            cin>>x>>y;
            if(q1[x].empty()){
                q.push(x);
            }
            q1[x].push(y);
        }
        else{
            temp = q.front();
            temp1 = q1[temp].front();
            q1[temp].pop();
            if(q1[temp].empty()){
                q.pop();
            }
             cout<<temp<<" "<<temp1<<"\n";
        }
    }

    return 0;
}