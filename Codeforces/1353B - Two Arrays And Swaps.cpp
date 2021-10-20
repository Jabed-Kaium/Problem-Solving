#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,n,x,k,a,b,sum;
    multiset<int> s1,s2;
    multiset<int>::iterator it,it1;

    cin>>t;
    while(t--){
        sum = 0;
        cin>>n>>k;
        for(int i=0; i<n; i++){
            cin>>x;
            s1.insert(x);
        }
        for(int i=0; i<n; i++){
            cin>>x;
            s2.insert(x);
        }
        while(k--){
            it = s1.begin();
            it1 = s2.end();
            it1--;

            if(*it1 > *it){
                a = *it;
                b = *it1;

                s1.erase(it);
                s2.erase(it1);

                s1.insert(b);
                s2.insert(a);
            }
        }

        for(it = s1.begin(); it!=s1.end(); it++){
            sum += (*it);
        }

        cout<<sum<<endl;

        s1.clear();
        s2.clear();
    }

    return 0;
}