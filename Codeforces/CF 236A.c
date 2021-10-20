#include<stdio.h>
#include<string.h>

int main()

{
    char str[102];
    int i,j,len,temp,count;
    int ara[26]={0};

    while(scanf("%s", &str)==1)
    {
        count=0;
        len = strlen(str);
        for(i=0; i<len; i++)
        {
            temp = str[i]-97;
            ara[temp]++;
        }
        for(j=0; j<26; j++)
        {
            if(ara[j]>=1)count++;
        }

        if(count%2==0)printf("CHAT WITH HER!\n");
        else printf("IGNORE HIM!\n");
    }

    return 0;
}

