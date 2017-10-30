#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
main()
{
 long long int a,rem,sum,i;

    while( 1 )
{
    cin>>a;
    if(a<0)
        break;
i=1;
sum=0;

        do{
        rem=a%3;
        sum=sum+(rem*i);
        a=a/3;
        i=i*10;
        }while(a>0);

    cout<<sum<<endl;



    }

}
