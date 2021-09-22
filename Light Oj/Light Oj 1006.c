#include<stdio.h>

int main()

{
    long long int t,i,j,n,a[10000];

    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {

        for(j=0; j<=5; j++)
        {
            scanf("%lld", &a[j]);
        }
        scanf("%lld", &n);
        for(j=6; j<=n; j++)
        {
            a[j] = (a[j-1] + a[j-2] + a[j-3] + a[j-4] + a[j-5] + a[j-6])%1000000;
        }

        printf("Case %lld: %lld\n", i,a[n]%10000007);
    }

    return 0;
}
