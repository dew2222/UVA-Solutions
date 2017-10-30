#include<iostream>
#include<cstdio>
main()
{
    int u[1502],i,a,b,c;
    int p2,p3,p5;
    u[1]=p2=p3=p5=1;
    for(i=2;i<=1500;i++)
    {
        a=2*u[p2];
        b=3*u[p3];
        c=5*u[p5];
        if(a<b&&a<c)
        {
          u[i]=a;
          p2++;
        }
        else if(b<a&&b<c)
        {
            u[i]=b;
            p3++;
        }
        else if(c<a&&c<b)
        {
            u[i]=c;
            p5++;
        }
        else if(a==b)
        {
            p3++;
            i--;
        }
         else if(a==c)
        {
            p5++;
            i--;
        }
        else if(b==c)
        {
      p5++;
      i--;
        }
    }
    printf("The 1500'th ugly number is %d.\n",u[1500]);
    return 0;

}
