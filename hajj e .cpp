
#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
main()
{
    while(1)
    {
        int a,i,pos=0,neg=0,res,j=1;
        cin>>a;
        if(a==0)
            break;
        else
        {
            for(i=1;i<=a;i++)
            {

                cin>>i;
                if(i>0)
                    pos++;
                else
                    neg++;

            }
            res=pos-neg;
            cout<<"Case "<< j<<": "<<res<<endl;


        }

    }



    return 0;
}
