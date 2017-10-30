#include <cstdio>
#include <iostream>
#include<cmath>
using namespace std;
 long long int taxi(long long int in )
 {
     double tax=0;
         if(in<=180000)
            return 0;
             in=in-180000;
         if(in<=300000)
         {
             tax=in*.10;
             if(tax<2000)
                return 2000;
           else
            return ceil(tax);

         }
           tax=30000;
           in-=300000;
         if(in<=400000)
         {
              tax+=in*.15;
              return ceil(tax);
         }
         tax+=400000*.15;
          in=in-400000;
             if(in<=300000)
         {
              tax+=in*.20;
           return ceil(tax);
         }
           tax+=300000*.20;
          in=in-300000;
             tax+=in*.25;
           return ceil(tax);

     }
     main()
     {
           long long int a,b,i;
          cin>>a;
     for(i=1;i<=a;i++)
     {
          scanf("%lld",&b);
          cout<<"Case "<<i<<": "<<taxi(b)<<endl;
     }
        return 0;
     }

