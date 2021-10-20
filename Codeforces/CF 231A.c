#include<stdio.h>

int main()

{
    int n,i,j,count=0,count1=0;
    int ara[3];

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &ara[j]);
            if(ara[j]==1)count++;
        }
        if(count>=2)count1++;
        count=0;
    }

    printf("%d\n", count1);

    return 0;
}
