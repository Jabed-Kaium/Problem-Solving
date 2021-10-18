#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i,j,k,indx=0,value,new_x,max,temp_indx;
    deque < pair<int,int> > q1;
    deque < pair<int,int> > q2;
    deque <int> res;
    deque < pair<int,int> >::iterator it;


    scanf("%d %d", &n,&x);
    for(i=0; i<n; i++){
        scanf("%d", &value);
        q1.push_back(make_pair(value,++indx));
    }
    new_x = x;
    while(x--){
        for(i=0; i<new_x && !q1.empty(); i++){
            q2.push_back(q1.front());
            q1.pop_front();
        }
        max = q2[0].first;
        temp_indx=0;
        it = q2.begin();
        for(i=1; i<q2.size(); i++){
            if(q2[i].first>max){
                max = q2[i].first;
                temp_indx = i;
                it = q2.begin()+i;
            }
        }
        res.push_back(q2[temp_indx].second);
        q2.erase(it);
        for(i=0; i<q2.size(); i++){
            if(q2[i].first==0){
                q1.push_back(q2[i]);
            }
            else{
                q2[i].first -= 1;
                q1.push_back(q2[i]);
            }
        }
        q2.clear();

    }

    for(i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    printf("\n");
    return 0;
}