#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
 main()
{
   int a,b,c,d,sum;
  while(1)
   {
       cin >> a >> b >> c >> d;
       sum=1080;
                if(!a && !b && !c && !d)
                        break;
      else if(b>a)
       {
           sum+=(40+a-b)*9;
       }
       else
        sum+=(a-b)*9;
        if(c>b)
                sum+=(c-b)*9;
        else
            sum+=(40+c-b)*9;
        if(d>c)
        sum+=(40+c-d)*9;
        else
            sum+=(c-d)*9;
   cout<<sum<<endl;
   }
    return 0;
}
