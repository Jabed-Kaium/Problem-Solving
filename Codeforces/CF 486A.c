#include<stdio.h>

int main()

{
    long long int n,a;
    scanf("%lld", &n);
    if(n%2==0)
    {
        printf("%lld\n", n/2);
    }
    else
    {
        a=(n-1)/2;
        printf("%lld\n", a-n);
    }

    return 0;
}
