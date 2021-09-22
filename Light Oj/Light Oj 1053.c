#include<stdio.h>

int main()

{
    int t,i,a,b,c;

    scanf("%d", &t);

    if(t<=200)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d %d %d", &a,&b,&c);
            if(a>=1 && a<=40000 && b>=1 && b<=40000 && c>=1 && c<=40000)
            {
                if((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (a*a)+(c*c)==(b*b))
                    printf("Case %d: yes\n", i);
                else
                    printf("Case %d: no\n", i);
            }
        }
    }

    return 0;
}
