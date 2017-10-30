#include <cstdio>
#include <iostream>
using namespace std;
 main()
 {
     long long int a,b,c,line,term,sum;
     while(scanf("%lld",&a)==1)
     {

         line=(a+1)/2;
         term=line*line;
         sum=(((term*2)-1)*3)-6;
         cout<<sum<<endl;
     }
     return 0;
 }
