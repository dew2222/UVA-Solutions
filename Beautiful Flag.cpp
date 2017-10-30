#include<iostream>
#include<cstdio>
using namespace std;
main()
{
    int x1,x2,y,r,i,a;
    cin>>i;
    for(a=1;a<=i;++a)
    {
        cin>>r;
        x1=(45*r)/20;
        x2=(55*r)/20;
        y=(30*r)/20;
        cout<<"Case "<<a<<":"<<endl;
        cout<<-x1<<" "<<y<<endl;
        cout<<x2<<" "<<y<<endl;
        cout<<x2<<" "<<-y<<endl;
        cout<<-x1<<" "<<-y<<endl;
    }
    return 0;
}
