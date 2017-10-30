#include<stdio.h>
#include<algorithm>

main()
{
    long int a[2000005],b,c;
    while(scanf("%ld",&b)!=0)
   {
    for(c=1;c<=b;c++)
    {
        scanf("%ld",&a[c]);
    }
    sort(a,a+c);
     for(c=1;c<=b;c++)
    {
        printf("%ld ",a[c]);
    }
       printf("\n");
   }
    return 0;

}
