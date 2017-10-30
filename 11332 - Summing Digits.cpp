#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int func(int);
main()
{
    long int a;

    while(1)
    {
        cin>>a;
        int sum=0,su=0;

        if(a==0)
            break;
        else
        {
            if(a<10)
                cout<<a<<endl;
            else
            {
                sum=func(a);

                cout<<sum<<endl;
        }
    }

}
return 0;
}
int func(int a)
{
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
