#include<stdio.h>
#include<string.h>

int main()

{
    int i,count=0;
    char s[20];
    scanf("%s", &s);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='7' || s[i]=='4')
        {
            count++;
        }
    }
    if(count==4 || count==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
