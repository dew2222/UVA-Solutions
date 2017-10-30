#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int func(int);
main()
{
    char c1[30],c2[30];
    int l1,l2,i,j,a,sum1,sum2,c;
    float b,sin1,sin2;
    while(gets(c1))
    {
        gets(c2);
        l1=strlen(c1);
        l2=strlen(c2);
        sum1=0;
        for(i=0;i<l1;i++)
        {
            if(c1[i]>='a'&&c1[i]<='z')
                sum1+=c1[i]-96;
            else if(c1[i]>='A'&&c1[i]<='Z')
                sum1+=c1[i]-64;
        }
         if(sum1<10)
         sin1=sum1;
            else
                sin1=func(sum1);

        sum2=0;

        for(i=0;i<l2;i++)
        {
            if(c2[i]>='a'&&c2[i]<='z')
                sum2+=c2[i]-96;
            else if(c2[i]>='A'&&c2[i]<='Z')
                sum2+=c2[i]-64;
        }
         if(sum2<10)
           sin2=sum2;
            else
                sin2=func(sum2);


                if(sin1>sin2)

        b=(float)sin2*100/(float)sin1;
        else
        b=(float)sin1*100/(float)sin2;
        printf("%0.2f %%\n",b);

    }

return 0;
}
int func(int c)
{
    int a;
    a=c;

    int sum=0;
    while(a>9)
    {
        sum+=a%10;
        a=a/10;
    }
    a=sum+a;
    if(a>9)
        a=func(a);
    return a;

}
