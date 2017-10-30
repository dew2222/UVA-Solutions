#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){
    string ch;

    while (getline(cin,ch)){
        int count = 0;

        for (int i = 0 ; i < (int)ch.length();i++)
        {
            if (ch[i] == '"')
                {
              count++;

                count =count%2;

                if (count == 1)
                    cout << "``";
                else
                    cout << "''";
            }
            else
                cout << ch[i];
        }

        cout << '\n';

    }
    return 0;
}
