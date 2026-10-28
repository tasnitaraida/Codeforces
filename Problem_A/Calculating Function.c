#include<stdio.h>
int main()
{
    long long n,x;
    scanf("%lld",&n);
 
    long long d=n/2;
    long long r=n%2;
 
    if (n%2==0)
    x=d;
    else
    x=((d+r)*(-1));
 
    printf("%lld",x);
}
