#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct student{
    int index;
    int need;
    int total;
};

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    struct student stu[105];
    deque <struct student> dq;

    int x,n,m;

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        cin>>x;
        stu[i].index = i;
        stu[i].need = x;
        stu[i].total = 0;
        dq.push_back(stu[i]);
    }

    while(dq.size()>1){
        struct student temp = dq.front();
        dq.pop_front();
        temp.total += m;
        if(temp.total < temp.need){
            dq.push_back(temp);
        }
    }

    cout<<dq.front().index<<"\n";

    return 0;
}