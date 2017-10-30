#include<stdio.h>
main()
{
    int a,i,c,d;
    float cel,f,fah;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       scanf("%d %d",&c,&d);
    f=(9*c/5)+32;
    fah=(f+d)-32;
    cel=fah*5/9;
   printf("Case %d: %.2f\n",i,cel);
    }
return 0;
}

