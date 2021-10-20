#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,x;
    deque<int>dq;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        bool flag = false;
        cin>>x;
        for(deque<int>::iterator it = dq.begin(); it!=dq.end(); it++){
            if(*it == x){
                flag = true;
                break;
            }
        }
        if(flag==false){
            dq.push_front(x);
        }
        if(dq.size()>k)dq.pop_back();
    }

    cout<<dq.size()<<"\n";
    for(deque<int>::iterator it = dq.begin(); it!=dq.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"\n";

    return 0;
}