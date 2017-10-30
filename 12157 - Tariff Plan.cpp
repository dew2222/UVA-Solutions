#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
 main()
{
    int a,sum,rest,t,i,j,b[20],c,cost,sum1,rest1,cost1;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>c;
        sum=0;
        cost=0;
        sum1=0;
        cost1=0;
        for(j=1;j<=c;j++)

        {
            cin>>b[j];

    sum=b[j]/30;
    rest=b[j]%30;
    if(0<=rest<=29)
       {
       sum=sum+1;
       }
       cost=cost+sum*10;

        sum1=b[j]/60;
    rest1=b[j]%60;
    if(0<=rest1<=59)
       {
       sum1=sum1+1;
       }
       cost1=cost1+sum1*15;

        }
            if(cost<cost1)
       {
           cout<<"Case "<<i<<": Mile "<<cost<<endl;
       }
        else if(cost>cost1)
       {
           cout<<"Case "<<i<<": Juice "<<cost1<<endl;
       }
         if(cost==cost1)
       {
           cout<<"Case "<<i<<": Mile Juice "<<cost<<endl;
       }


    }
    return 0;
}
