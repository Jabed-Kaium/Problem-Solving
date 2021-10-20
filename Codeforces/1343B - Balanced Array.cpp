#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t,n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        vector<int> v;
        vector<int> v1;
        if((n/2)%2==0){
            int x=2;
            int temp=0;
            for(int i=1; i<=n/2; i++){
                if(i==n/2){
                    v.push_back(x);
                    v1.push_back(x+temp);
                }
                else{
                v.push_back(x);
                v1.push_back(x-1);
                temp++;
                x+=2;
                }
            }
            printf("YES\n");
            for(int i=0; i<v.size(); i++)printf("%d ", v[i]);
            for(int i=0; i<v.size(); i++)printf("%d ", v1[i]);
            printf("\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}