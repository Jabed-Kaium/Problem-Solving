#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>x;
            dq.push_back(x);
        }
        int alice=0,bob=0,moves=0,temp,temp2;
        bool flag = false;
        alice += dq.front();
        temp = dq.front();
        dq.pop_front();
        moves++;
        flag = true;

        while(!dq.empty()){
            temp2 = 0;
            if(flag==true){
                while(temp2<=temp && !dq.empty()){
                    temp2 += dq.back();
                    bob += dq.back();
                    dq.pop_back();
                }
                temp = temp2;
                moves++;
                flag = false;
            }
            else{
                while(temp2<=temp && !dq.empty()){
                    temp2 += dq.front();
                    alice += dq.front();
                    dq.pop_front();
                }
                temp = temp2;
                moves++;
                flag = true;
            }
        }

        cout<<moves<<" "<<alice<<" "<<bob<<"\n";

    }
    
    
    return 0;
}