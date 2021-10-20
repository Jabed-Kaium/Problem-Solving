#include<stdio.h>

int main()

{
    char str[101];
    int i,count=0;

    gets(str);

    for(i=0; i<strlen(str); i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9' || str[i]=='9' )
        {
            count=1;
            break;
        }
    }
    if(count==1)printf("YES\n");
    else printf("NO\n");

    return 0;
}
