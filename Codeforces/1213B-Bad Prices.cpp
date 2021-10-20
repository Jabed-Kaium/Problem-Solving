#include<bits/stdc++.h>
using namespace std;

int a[1000000];

int main()
{
    int t,n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        for(int i=0; i<n; i++)scanf("%d", &a[i]);

        int min_item = INT_MAX;
        int count = 0;
        for(int i=n-1; i>=0; i--){
            if(a[i]>min_item)count++;
            min_item = min(min_item,a[i]);
        }

        printf("%d\n", count);
    }

    return 0;
}