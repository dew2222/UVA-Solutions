#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
main()
{
    int a,i;
    float c,f,d;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>c>>d;
      f=0;
    f=(9*c)/5+32;
    f=f+d;
    c=(5/9)*(f-32);
    cout<<"Case "<<i<<": "<<c<<endl;
    }


return 0;
}
