#include<stdio.h>

int main()

{
    int t,i,x;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &x);

        if(x>10)
        {
            printf("10 %d\n", x-10);
        }
        else
        {
            printf("0 %d\n", x);
        }
    }

    return 0;
}
