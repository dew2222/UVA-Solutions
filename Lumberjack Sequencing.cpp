
#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
main()
{
    int a,b[15],c,d,i,j;
    cin>>a;
    cout<<"Lumberjacks: "<<endl;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=10;j++)
        {
            cin>>b[j];

        }


          if(b[j]<b[j+1])
          {

            for(j=1;j<=9;j++)
            {
                if( (b[j]<b[j+1]))
            }
            cout<<"Ordered "<<endl;
          }



    }
}
