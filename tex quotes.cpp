#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string ch;
     int l,i;
     int count =0;

    while (getline(cin,ch))
        {
            l=ch.length();


        for ( i = 0 ; i <l;i++)
        {
            if (ch[i] == '"')
                {
              count++;
                count =count%2;

                if (count ==0)
                    cout << "''";
                else
                    cout << "``";
            }
            else
                cout << ch[i];
        }

        cout <<"\n";

    }
    return 0;
}
