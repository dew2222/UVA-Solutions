#include <cstdio>
#include <iostream>


using namespace std;
main()
{
    int t,n,w[55],i,j,k,up,low;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>w[j];
        }
        up=0;
        low=0;
        for(k=1;k<n;k++)
        {
            if(w[k]<w[k+1])
                ++up;
                else if(w[k]>w[k+1])
                    ++low;
                else if(w[k]==w[k+1])
                    continue;
        }
        cout<<"Case "<<i<<": "<<up<<" "<<low<<endl;
    }
    return 0;
}
