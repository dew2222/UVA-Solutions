#include <cstdio>
#include <iostream>
#include <math.h>

#define PI  acos(-1.0)

using namespace std;
 main()
{
    double b,r,red,green;
    double a,l,i;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>l;
            b=(6*l)/10;
            r=l/5;

        red=PI*r*r;
        green=(l*b)-red;
        printf("%.2lf %.2lf\n",red,green);

    }

    return 0;
}
