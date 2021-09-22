#include<stdio.h>
#include<math.h>

int main()

{
    int i,t;
    double j,k,d,r,pi = 2*acos(0.0);

    scanf("%d", &t);

    if(t<=1000)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lf", &r);
            if(r>0 && r<=1000)
            {
            d=2*r;
            j = ((d*d)-(pi*(r*r)));
            k = (j+10e-9);
            printf("Case %d: %.2lf\n", i,k);
            }
        }
    }
    return 0;
}
