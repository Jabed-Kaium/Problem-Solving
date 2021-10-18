#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x,y,counter;
    map <int,int> m;
    map < map<int,int> , int> mp;
    map < map<int,int> , int>::iterator it;
    scanf("%d", &n);
    while(n--){
        counter=0;
        scanf("%d %d", &x,&y);
        m[x] = y;
        pair < map < map<int,int> , int>::iterator, bool> checker;
        checker = mp.insert(make_pair(m,++counter));
        if(!checker.second){
            checker.first->second++;
        }
        m.clear();
    }

    for(it = mp.begin(); it!=mp.end(); it++){
        map<int, int> internal_map = it->first;
        for(map<int,int>::iterator it2 = internal_map.begin(); it2!=internal_map.end(); it2++){
            cout<<it2->first<<" "<<it2->second<<" ";
        }
        cout<<it->second<<"\n";
    }

    return 0;
}