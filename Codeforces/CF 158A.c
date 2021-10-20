#include<stdio.h>

int main()

{
    int ara[50];
    int n,k,i,count=0;

    scanf("%d %d", &n,&k);

    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i=0; i<n; i++)
    {
        if(ara[i]>0 && ara[i]>=ara[k-1])
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
