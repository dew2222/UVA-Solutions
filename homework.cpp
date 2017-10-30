#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<conio.h>
using namespace std;
main()
{
    int a,b,c,cou;
    char s;
    while(scanf("%d%c%d=%d",&a,&s,&b,&c)==4)
    {
        cou=0;
        if(s=='+')
        {
            if(a+b==c)
            {
                cou++;
            }
        }
           else if(s=='-')
        {
            if(a-b==c)
            {
                cou++;
            }

        }
        cout<<cou<<endl;
    }
    return 0;
    getch();
}
