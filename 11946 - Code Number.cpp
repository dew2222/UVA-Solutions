#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string ch;
     int j,l,i;
    scanf("%d\n",&j);
      while (getline(cin,ch))
        {
            l=ch.length();


        for ( i = 0 ; i <l;i++)

           {

            if (ch[i]=='1')
                cout << "I";
            else if (ch[i]=='2')
                cout << "Z";
           else if (ch[i]=='3')
           cout << "E";
          else if (ch[i]=='4')
            cout << "A";
          else if (ch[i]=='5')
            cout << "S";
          else if (ch[i] =='6')
            cout << "G";
            else if (ch[i]=='7')
                cout << "T";
            else if (ch[i]=='8')
                cout << "B";
            else if (ch[i]=='9')
                cout << "P";
            else if (ch[i]=='0')
                cout << "O";
            else
                cout <<ch[i];

}
cout<<endl;
        }

    return 0;
}
