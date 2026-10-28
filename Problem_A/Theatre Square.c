#include<stdio.h>
#include<math.h>
int main(void)
{
    long long n,m,a;
    long long s,t;
    scanf("%lld%lld%lld",&n,&m,&a);
 
    s=(n+a-1)/a;
    t=(m+a-1)/a;
 
    printf("%lld",s*t);
    return 0;
}
