#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
main()
{
    string ch;
    int l,i;
    while(getline(cin,ch))
    {
       l=ch.length();

       for(i=0;i<l;i++)
       {
           ch[i]=ch[i]-7;
           cout<<ch[i];
       }
cout<<"\n";
    }
    return 0;
}

