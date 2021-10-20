#include<stdio.h>

int main()

{
    int n,x,y,z,sum=0,i;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d", &x,&y,&z);
        sum = sum + (x+y+z);
    }
    if(sum==0)printf("YES\n");
    else printf("NO\n");

    return 0;
}
