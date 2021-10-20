#include<stdio.h>

int main()

{
    int i,j,x,count=0,count1,count2;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &x);
            if(x==1)
            {
                count1=i;
                count2=j;
                break;
            }
        }
    }

    while(count1!=2)
          {
              if(count1<2)
                {
                    count1++;
                    count++;
                }
               else if(count1>2)
                {
                    count1--;
                    count++;
                }
          }
          while(count2!=2)
          {
              if(count2<2)
                {
                    count2++;
                    count++;
                }
               else if(count2>2)
                {
                    count2--;
                    count++;
                }
          }

          printf("%d\n", count);

          return 0;
}
