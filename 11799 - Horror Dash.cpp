#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
main()
{
    int a,b,c,i,j,sum,k=1;
    cin>>a;
    for(i=1;i<=a;i++)
    {
cin>>b;
        sum=0;
        for(j=1;j<=b;j++)
        {
            cin>>c;
        if(c>sum)
            sum=c;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;

}
return 0;
}
