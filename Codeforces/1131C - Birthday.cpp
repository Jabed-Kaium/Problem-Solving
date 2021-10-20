#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define ll long long

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int a[105];
    deque<int> dq;

    cin>>n;

    for(int i=0; i<n; i++)cin>>a[i];

    sort(a,a+n);

    int flag = 1;

    for(int i=n-1; i>=0; i--){
        if(flag == 1){
            dq.push_back(a[i]);
        }
        else if(flag == -1){
            dq.push_front(a[i]);
        }

        flag *= -1;
    }

    for(deque<int>::iterator it = dq.begin(); it!=dq.end(); it++){
        cout << *it << " ";
    }

    printf("\n");

    return 0;
}