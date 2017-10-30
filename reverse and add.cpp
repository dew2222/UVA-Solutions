#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
main()
{
 long long int in,a,rev,sum,i,cou,j,num;
 cin>>i;
 for(j=1;j<=i;j++)
 {
     cin>>in;
     num=in;
    rev=0;
    cou=1;
     while(num!=0)
     {
         rev=rev*10;
         rev=rev+(num%10);
         num=num/10;
     }

      if(num==rev)
     {
         cout<<"0 "<<rev<<endl;
     }
     else
     {
     while(num!=rev)
     {
        num=num+rev;
        cou++;
          while(num!=0)
     {
         rev=rev*10;
         rev=rev+(num%10);
         num=num/10;
     }
     }
     cout<<cou<<" "<<rev<<endl;
     }

 }

return 0;



}
