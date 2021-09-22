#include<stdio.h>

int main()

{
    int i,j,t,n,a,sum=0;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        sum=0;
        for(j=1; j<=n; j++)
        {
            scanf("%d", &a);
            if(a<0)
                a=0;
            sum=sum+a;
        }

        printf("Case %d: %d\n", i,sum);
    }

    return 0;
