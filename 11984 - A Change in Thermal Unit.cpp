#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
        int t ;
        float cel , in ;
        float fahrenheit;

        cin>>t;
        for(int i=0; i<t ; i++)
        {
                cin>>cel>>in;

                fahrenheit = (((cel * 9)/5)+32 ) ;
                fahrenheit +=in;
                cel = ((fahrenheit - 32) * 5/9);


                cout<<"Case "<<i+1<<": "<<fixed<<setprecision(2)<<cel<<endl;
        }
        return 0;
}
