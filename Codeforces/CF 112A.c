#include<stdio.h>

int main()

{
    int lucky[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n,i,count=0;
    scanf("%d", &n);
    for(i=0; i<14; i++)
    {
        if(n%lucky[i]==0)
        {
            count++;
            break;
        }
    }
    if(count>0)printf("YES\n");
    else printf("NO\n");

    return 0;
}
