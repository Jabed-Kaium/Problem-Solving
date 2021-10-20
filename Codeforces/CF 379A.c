#include<stdio.h>

int main()

{
    int a,b,x,result;

    scanf("%d %d", &a,&b);

    x = a/b;

    if(x>=b)
    {
        result = a+x+1;
        printf("%d\n", result);
    }
    else
    {
        result = a+x;
        printf("%d\n", result);
    }

    return 0;
}
