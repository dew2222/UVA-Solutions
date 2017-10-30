#include<iostream>
#include<cstdio>
using namespace std;
main()
{
    int a,b,c,d,i,j,res;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>b>>c>>d;
        res=d*((2*b)-c)/(b+c);
        cout<<res<<endl;

    }
    return 0;
}
