#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q1,q2;
    int n,x,count=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &x);
        q1.push(x);
    }
    for(int i=1; i<=n; i++){
        scanf("%d", &x);
        q2.push(x);
    }
    while(!q1.empty() && !q2.empty()){
        if(q1.front()==q2.front()){
            q1.pop();
            q2.pop();
            ++count;
        }
        else{
            x = q1.front();
            q1.pop();
            q1.push(x);
            ++count;
        }
    }

    printf("%d\n", count);

    return 0;
}