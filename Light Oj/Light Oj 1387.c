#include<stdio.h>
#include<string.h>

int main()

{
    int t,i,j,n,sum=0,amount;
    char s[6];

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        printf("Case %d:\n", i);
        for(j=1; j<=n; j++)
        {
            scanf("%s", s);
            if(s[0]=='d')
            {
                scanf("%d", &amount);
                sum = sum + amount;
            }
            if(s[0]=='r')
            {
                printf("%d\n", sum);
            }
        }
        sum=0;
    }

    return 0;
}
