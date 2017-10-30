#include <stdio.h>


main()
{
     float b[15],sum,avg;
     int i;
sum=0;

        for(i=1;i<=12;i++)
        {
            scanf("%f",&b[i]);
            sum=sum+b[i];
        }
        avg=sum/12;
        printf("$%.2f",avg);

    }


