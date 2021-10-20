#include<stdio.h>

int main()

{
    int n,i;
    scanf("%d", &n);

    for(i=1; i>0; i=i+3)
    {
        if(n==i)break;
        printf("I hate it\n");
    }


    for(i=2; i>0; i=i+3)
    {
        if(n==i)break;
        printf("I hate that I love it\n");

    }

    for(i=3; i>0; i=i+3)
    {
        if(n==i)break;
        printf("I hate that I love that I hate it\n");

    }

    return 0;

}
