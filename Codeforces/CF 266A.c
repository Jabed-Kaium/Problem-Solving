#include<stdio.h>
#include<string.h>

int main()

{
    char str[51];
    int i,n,count=0;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%s",  &str[i]);
    }
    for(i=0; i<n; i++)
    {
        if(str[i]==str[i+1])count++;
    }

    printf("%d\n", count);

    return 0;
}
