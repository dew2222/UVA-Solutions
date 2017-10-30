#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
 main()
 {
    long int a[20],b,c,t,i;
cin>>t;
for(i=1;i<=t;i++)
{
     cin>>b;
 for(c=0;c<b;c++)
    {
        scanf("%ld",&a[c]);
    }
    sort(a,a+c);
             cout<<"Case "<<i<<": "<<a[b/2]<<endl;
     }

     return 0;
 }

