#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
main()
{
char name[20][30],temp[30];
int n,v,i,j;
printf("Give the number of names to sort\n");
scanf("%d",&n);
printf("Give the names one by one\n");
for(i=0;i<=n;i++)
gets(name[i]);
for(i=0;i<n;i++)
for(j=i+1;j<=n;j++)
{
v=strcmp(name[i],name[j]);

if(v>0)
{
strcpy(temp,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j], temp);
}
}
printf("\nThe arrangement names are");
for(i=0;i<=n;i++)
cout<<name[i]<<endl;
}
