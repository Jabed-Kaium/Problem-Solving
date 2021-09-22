#include<stdio.h>

int main()

{
    int t,i,a,b;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &a,&b);
        if(a>b)
        {
            printf("Case %d: %d\n", i,(((a-b)*4)+(a*4)+19));
        }
        else if(a<b)
        {
            printf("Case %d: %d\n", i,(((b-a)*4)+(a*4)+19));
        }
        else if(a==b)
        {
            printf("Case %d: %d\n", i,(a*4)+19);
        }
    }

    return 0;
}
