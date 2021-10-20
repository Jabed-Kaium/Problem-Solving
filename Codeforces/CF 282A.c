#include<stdio.h>

int main()

{
    int n,x=0;
    char str[4];

    scanf("%d", &n);

    while(n--)
    {
        scanf("%s", str);
        if(str[1]=='+')
        {
            x=x+1;
        }
        else
        {
            x=x-1;
        }
    }
    printf("%d\n", x);

    return 0;
}
