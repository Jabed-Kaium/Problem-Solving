#include<stdio.h>
#include<string.h>

int main()

{
    char str[101];
    int upper=0,lower=0,i;

    gets(str);

    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            upper++;
        }
        if(str[i]>='a' && str[i]<='z')
        {
            lower++;
        }
    }
    if(upper==lower)
    {
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
            str[i] = 'a' + str[i]-'A';
            }
        }
        str[i]='\0';
        for(i=0; i<strlen(str); i++)
        {
            printf("%c", str[i]);
        }
    }
    if(upper>lower)
    {
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
            str[i] = 'A' + str[i]-'a';
            }
        }
        str[i]='\0';
        for(i=0; i<strlen(str); i++)
        {
            printf("%c", str[i]);
        }
    }
    if(upper<lower)
    {
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
            str[i] = 'a' + str[i]-'A';
            }
        }
        str[i]='\0';
        for(i=0; i<strlen(str); i++)
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}
