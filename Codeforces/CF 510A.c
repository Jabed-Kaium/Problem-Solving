#include<stdio.h>

int main()

{
    int n,m,row,col;

    scanf("%d %d", &n,&m);
    if(n>=3 && m>=3 && n<=50 && m<=50)
    {
        for(row=1; row<=n; row++)
        {
            if(row%2==0)
            {
                if(row%4==0)
                {
                    for(col=1; col<=m; col++)
                    {
                        if(col==1)printf("#");
                        else printf(".");
                    }
                }
                else
                {
                    for(col=1; col<=m; col++)
                    {
                        if(col==m)printf("#");
                        else printf(".");
                    }
                }
            }
            else
            {
                for(col=1; col<=m; col++)
                {
                    printf("#");
                }
            }

            printf("\n");
        }
    }

    return 0;
}
