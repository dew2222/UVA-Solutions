#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
main()
{
    char a[40];
    char c[10]={0,1,2,3,4,5,6,7,8,9};
    int l,i;
    while(gets(cin,a))
    {
       l=a.length();

       for(i=0;i<l;i++)
       {
           if(ch[i]==c[10]||ch[i]=='-')
           cout<<ch[i];
       }
cout<<"\n";
    }
    return 0;
}

