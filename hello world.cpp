#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include<math.h>

using namespace std;
main()
{
    long int a,i,j,res,line,paste;
    i=1;
    while(1)
    {


        cin>>a;
        res=0;
        line=1;
        paste=0;
        if(a<0)
            break;

        else
        {

            if(a==1)
                {
                    cout<<"Case "<<i<<": 0"<<endl;
                }
            else
                {
                    while(res<a)
                    {
                        res=pow(2,line);
                        line++;



                        paste++;


                    }

                      cout<<"Case "<<i<<": "<<paste<<endl;

                }
        }
i++;
    }
    return 0;
}
