#include<stdio.h>

int main()

{
    int k,n,w,i,sum=0;

    scanf("%d %d %d", &k,&n,&w);

    for(i=1; i<=w; i++)
    {
        sum = sum + (k*i);
    }
    if(sum<=n)printf("0\n");
    else printf("%d\n", sum-n);

    return 0;
}
