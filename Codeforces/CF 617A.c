#include<stdio.h>

int main()

{
    int x,i,count=0;

    scanf("%d", &x);

    for(i=5; i>=1; i--)
    {
            x = x/i;
            count++;
            if(x==1)break;
    }

    printf("%d\n", count);

    return 0;
}
