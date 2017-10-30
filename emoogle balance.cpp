#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
main()
{
    int j=1,i;
    while(1)
    {
        int a,b,pos=0,neg=0,res;
        cin>>a;
        if(a==0)
            break;
        else
        {
            for(i=1;i<=a;i++)
            {

                cin>>b;
                if(b==0)
                    neg++;
                else
                    pos++;
            }
            res=pos-neg;
            cout<<"Case "<< j<<": "<<res<<endl;
            j++;
        }

    }

    return 0;
}
