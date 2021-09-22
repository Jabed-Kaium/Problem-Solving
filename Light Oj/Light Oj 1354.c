#include<stdio.h>
int decimal_binary(int n);

int main()

{
    int a,b,c,d;
    int e,f,g,h;
    int i,j,k,l;
    int m,t;

    scanf("%d", &t);

    for(m=1; m<=t; m++)
    {
        scanf("%d.%d.%d.%d", &a,&b,&c,&d);
        e=decimal_binary(a);
        f=decimal_binary(b);
        g=decimal_binary(c);
        h=decimal_binary(d);

        scanf("%d.%d.%d.%d", &i,&j,&k,&l);

        if(e==i && f==j && g==k && h==l)
        {
            printf("Case %d: Yes\n", m);
        }
        else
        {
            printf("Case %d: No\n", m);
        }
    }

    return 0;
}

int decimal_binary(int n)
{
    int r,i=1,binary=0;

    while(n!=0)
    {
        r = n%2;
        n = n/2;
        binary = binary + r*i;
        i=i*10;
    }

    return binary;
}
