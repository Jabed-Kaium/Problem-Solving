#include<stdio.h>
#include<string.h>

int main()

{
    char str[100002];
    int n,i,count1=0,count2=0;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%s", &str[i]);
    }
    for(i=0; i<n; i++)
    {
        if(str[i]=='A')
        {
            count1++;
        }
        else if(str[i]=='D')
        {
            count2++;
        }
    }

    if(count1>count2)printf("Anton\n");
    else if(count1<count2)printf("Danik\n");
    else if(count1==count2)printf("Friendship\n");

    return 0;
}
