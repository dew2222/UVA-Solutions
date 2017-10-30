
#include <cstdio>
#include <iostream>
using namespace std;
main()
{
    int a[1005],b,c,i,j,n,d,temp,sw;
while(scanf("%d",&n)==1)

    {

    for (c = 1; c<=n; c++)
    {
        scanf("%d", &a[c]);
    }
sw=0;
 for (c = 1; c<=n; c++)
  {
    for (d = c+1; d <=n ; d++)
    {
      if (a[c] > a[d])
      {
           sw++;
      }
    }

  }
     cout<<"Minimum exchange operations : "<<sw<<endl;

    }
    return 0;
}
