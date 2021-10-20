#include<stdio.h>
#include<string.h>

int main()

{
    int i,len;
    char str[101];

    scanf("%s", str);

    len = strlen(str);

    for(i=0; i<len; i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='Y')
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                printf(".%c", 'a'+str[i]-'A');
            }
            else if(str[i]>='b' && str[i]<='z')
            {
                printf(".%c", str[i]);
            }
        }
    }

    return 0;
}
