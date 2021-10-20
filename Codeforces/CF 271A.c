#include<stdio.h>

int main()

{
    int y,n,i,a,b,c,d;
    scanf("%d", &y);
    for(i=y+1; i>y; i++)
    {
        n=i;
        d=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        a=n%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            printf("%d\n", i);
            break;
        }
    }
}

