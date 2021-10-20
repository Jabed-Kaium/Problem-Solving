#include<stdio.h>

int main()

{
    int n,m,row,col,count=0;

    scanf("%d %d", &n,&m);

    for(row=1; row<=n; row++)
    {
        for(col=1, col<=m; col++)
        {
            scanf("%c", &col);
        }
    }
    for(row=1; row<=n; row++)
    {
        for(col=1, col<=m; col++)
        {
            if(col==67 || col==77 || col==89){printf("#Color\n");break;}
            else if(col==85 || col==66)count++;
        }
    }
    if(count==(n*m))printf("#Black&White\n");

    return 0;
}
