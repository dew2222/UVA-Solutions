#include<stdio.h>

int main(){
    int a,b;
printf("Enter 2 numbers:");
scanf("%d%d",&a,&b);
    printf("Greatest Common Divisor is %d",gcd(a,b));

    return 0;
}
int gcd(long a,long b)
{
if(b==0)
return a;
else
    printf("%ld %ld\n",b,a%b);
return gcd(b,a%b);
}
