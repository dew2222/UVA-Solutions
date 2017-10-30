#include<stdio.h>
#include<algorithm>
using namespace std;
long int a[2000005],b,c;
main()
{
    while(scanf("%ld",&b)!=EOF)
   {
       if(b==0)
       {
        break;
   }
    for(c=1;c<=b;c++)
    {
        scanf("%ld",&a[c]);
    }
    sort(a,a+c);
     for(c=1;c<=b;c++)
    {
        printf("%ld",a[c]);
        if(c<b)
        {
            printf(" ");
        }

    }
       printf("\n");
   }
    return 0;
}
