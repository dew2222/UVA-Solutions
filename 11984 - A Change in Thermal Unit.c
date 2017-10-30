#include<stdio.h>
int main()
{
    int a,i,c,d;
    float cel , incInFahr ;
    float fahrenheit;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       scanf("%d %d",&c,&d);
       fahrenheit = (((cel * 9)/5)+32 ) ;
                fahrenheit +=incInFahr;
                cel = (5/9*(fahrenheit - 32));
   printf("Case %d: %.2f\n",i,cel);
    }
return 0;
}
