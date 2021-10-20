#include<stdio.h>

int main()

{
    int n,i,ara[100],count1=0,count2=0;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(i=0; i<n; i++)
    {
        if(ara[i]%2==0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1>count2)
    {
        for(i=0; i<n; i++)
        {
            if(ara[i]%2!=0)
            {
                printf("%d\n", i+1);
                break;
            }
        }
    }
    else if(count1<count2)
    {
        for(i=0; i<n; i++)
        {
            if(ara[i]%2==0)
            {
                printf("%d\n", i+1);
                break;
            }
        }
    }

    return 0;
}
