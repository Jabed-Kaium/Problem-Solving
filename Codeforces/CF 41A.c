#include<stdio.h>
#include<string.h>

int main()

{
    char s[101],t[101],z[101];
    int i,j,len,output;

    gets(s);
    gets(t);

    len = strlen(s);

    for(i=0,j=len-1; j>=0; i++,j--)
    {
        z[i]=s[j];
    }
    z[i]='\0';

    output = strcmp(z,t);

    if(output==0)printf("YES\n");
    else printf("NO\n");

    return 0;
}
