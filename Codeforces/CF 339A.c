#include<stdio.h>
#include<string.h>

int main()

{
    char s[102];

    scanf("%s", &s);

    int len = strlen(s);

    int i,j,temp;

    for(i=0; i<len; i++)
    {
        for(j=0; j<len-1; j=j+2)
        {
            if(s[j]>s[j+2])
            {
                temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }

    printf("%s\n", s);

    return 0;
}
