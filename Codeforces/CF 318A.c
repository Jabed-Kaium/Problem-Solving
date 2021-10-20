#include<stdio.h>

int main()

{
    long long int n,k;
    long long int i,count1=0,count2=0;
    scanf("%I64d %I64d", &n,&k);
    if(n%2==0)
    {
        for(i=1; i<=n; i=i+2)
        {
            count1++;
            if(count1==k)break;
        }
        printf("%I64d\n", i);
    }
    else
    {
        for(i=0; i<=n; i=i+1)
        {
            count2++;
            if(count2==k)break;
        }
        printf("%I64d\n", i);
    }

    return 0;
}
