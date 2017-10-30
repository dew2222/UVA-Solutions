#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include<math.h>

using namespace std;
main()
{
    double a,u,v,t,s,num,res,res1;
    int i=1;

while(1)
{

cin>>num;
if(num==0)
    break;
           res=0;
           res1=0;

            if(num==1)
            {
                cin>>u>>v>>t;
                res=(v-u)/t;
                res1=(u*t)+(.5*res*t*t);
                printf("Case %d: %.3lf %.3lf\n",i,res1,res);
            }
            else if(num==2)
            {
                 cin>>u>>v>>a;
                res=(v-u)/a;
                res1=(u*res)+(.5*a*res*res);
                printf("Case %d: %.3lf %.3lf\n",i,res1,res);
            }
            else if(num==3)
            {
                 cin>>u>>a>>s;
                res=sqrt((u*u)+(2*a*s));
                res1=(res-u)/a;
                printf("Case %d: %.3lf %.3lf\n",i,res,res1);
            }
            else if(num==4)
            {
                  cin>>v>>a>>s;
                res=sqrt((v*v)-(2*a*s));
                res1=(v-res)/a;
                printf("Case %d: %.3lf %.3lf\n",i,res,res1);
            }
i++;
           }
           return 0;
    }

