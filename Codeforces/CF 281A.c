#include<stdio.h>
#include<string.h>

int main()

{
    char str[1001];

    scanf("%s", str);

    if(str[0]>='a' && str[0]<='z')
    {
        str[0] = 'A' + str[0]-'a';
    }

    printf("%s\n", str);

    return 0;
}
