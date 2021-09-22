#include<stdio.h>

int main()

{
    int t,i,j,x1,y1,x2,y2,a,b,cow;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
        scanf("%d", &cow);
        printf("Case %d:\n", i);
        for(j=1; j<=cow; j++)
        {
            scanf("%d %d", &a,&b);
            if(a>x1 && a<x2 && b>y1 && b<y2)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }

    return 0;
}
