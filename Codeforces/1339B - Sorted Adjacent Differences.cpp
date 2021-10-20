#include<bits/stdc++.h>
using namespace std;

int a[1000000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    deque <int> dq;
    cin>>t;

    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int left=0, right = n-1;
        while(left<right){
            dq.push_front(a[right]);
            dq.push_front(a[left]);
            left++;
            right--;
        }
        if(n%2!=0){
            dq.push_front(a[left]);
        }

        for(deque<int>::iterator it = dq.begin(); it!=dq.end(); it++){
            cout<<*it<<" ";
        }

        dq.clear();
        cout<<"\n";
    }

    return 0;
}