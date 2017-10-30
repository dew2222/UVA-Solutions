#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
main()
{
    string ch;
    int a,b,l,i,sum;
    cin>>a;
    getchar();

    for(b=1;b<=a;b++)
    {
        getline(cin,ch);
       l=ch.length();
       sum=0;

       for(i=0;i<l;i++)
       {
           if(ch[i]=='a'||ch[i]=='d'||ch[i]=='g'||ch[i]=='j'||ch[i]=='m'||ch[i]=='p'||ch[i]=='t'||ch[i]=='w'||ch[i]==' ')
           {
               sum=sum+1;
           }
           else if(ch[i]=='b'||ch[i]=='e'||ch[i]=='h'||ch[i]=='k'||ch[i]=='n'||ch[i]=='q'||ch[i]=='u'||ch[i]=='x')
            {
                sum=sum+2;
            }
                  else if(ch[i]=='c'||ch[i]=='f'||ch[i]=='i'||ch[i]=='l'||ch[i]=='o'||ch[i]=='r'||ch[i]=='v'||ch[i]=='y')
            {
                sum=sum+3;
            }
              else if(ch[i]=='s'||ch[i]=='z')
            {
                sum=sum+4;
            }
       }
     printf("Case #%d: %d\n",b,sum);
    }

    return 0;
}

