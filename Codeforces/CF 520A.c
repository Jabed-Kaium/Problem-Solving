#include<stdio.h>
#include<string.h>

int main()

{
    int n,i,count=0;

    scanf("%d", &n);

    char str[n];

    getchar();
    gets(str);

    for(i=0; i<n; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i]+32;
        }
    }

    for(i=0; i<n; i++)
    {
        if(str[i]!=str[i+1])
        {
            count++;
        }
    }

    if(count>=26)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
