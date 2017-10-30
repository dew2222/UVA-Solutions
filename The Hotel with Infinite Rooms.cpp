#include <iostream>
#include <string>
#include<cstdio>

using namespace std ;

main()
{
    long long int a,b,sum;
    while (scanf("%lld %lld",&a,&b)==2)
    {
        sum=0;
        while(b> sum)
             {
             sum = sum+a;
             a= a+1;
             }
        printf("%lld\n",a-1);
        }
return 0;
}

