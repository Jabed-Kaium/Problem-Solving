#include<stdio.h>
#include<string.h>

int main()

{
    int i,len,count=0;

    char str[101];

    scanf("%s", str);

    len = strlen(str);

    for(i=0; i<len; i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
            if(count>=6)break;
        }
        else
        {
            count=0;
        }
    }

    if(count>=6)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
