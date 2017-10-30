#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
main()
{
    int a,b,c,count,d,sum,res,e;
    while(scanf("%d %d",&a,&b)==2)
    {
          count=0;
          sum=0;
        res=0;
        e=0;d=0;

        for(c=a;c<=b;c++)
        {

            if(c<=10)
                count++;
            else if(10<c<=99)
            {
                sum=c%10;
                res=c/10;
                if(sum!=res)
                    count++;

            }
            else if(100<=c<=999)
            {
                sum=c%10;
                e=c/10;
                res=e%10;
                d=e/10;
                if(sum==d||sum==res||res==d)
                    break;
                    else
                        count++;
            }
            else if(1000<=c<=5000)
            {
                sum=c%1000;
                c=c/10;
                res=c%100;
                c=c/10;
                e=c%10;
                c=c/10;
                if(sum!=res||sum!=e||sum!=c||res!=e||res!=c||c!=e)
                    count++;

            }
        }
        cout<<count<<endl;
    }
}
