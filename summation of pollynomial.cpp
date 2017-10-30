#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include<math.h>

using namespace std;
main()
{
     long long int a,i,sum,b;
    while(scanf("%lld",&a)==1)
    {


        sum=0;
        for(i=1;i<=a;i++)
        {

            sum=sum+(i*i*i);
        }
        cout<<sum<<endl;
    }
return 0;
    }

