#include<iostream>
#include<cstdio>
using namespace std;
main()
{
    int a[3002],b,c,i,j,k,coun,cou;
    while(scanf("%d",&b)==1)
   {
    for(i=1;i<=b;i++)
    {
        cin>>a[i];
    }
     if(b==1)
    {
       cout<<"Jolly"<<endl;
    }
    else if(b>1)
    {
        for(i=1;i<=b-1;i++)
    {

            a[i]=a[i]-a[i+1];
            if(a[i]<0)
            {
                a[i]=a[i]*(-1);
            }

        }
        coun=0;
        cou=0;
    for(i=1;i<=b-2;i++)
    {
        if(a[i]>a[i+1])
        {
            coun++;
        }
        else if(a[i]<a[i+1])
        {
            cou++;
        }

    }
    if(coun==(b-2))
    {
        cout<<"Jolly"<<endl;
    }
    else if(cou==(b-2))
    {
        cout<<"Jolly"<<endl;
    }
    else
        cout<<"Not jolly"<<endl;

   }
   }
   return 0;
    }


