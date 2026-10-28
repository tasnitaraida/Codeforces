#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,max,min;
        long long move=0;
        scanf("%lld%lld",&a,&b);
        
        if(a>b)
        {
            max=a;
            min=b;
        }
        else
        {
            max=b;
            min=a;
        }
 
        long long x=max-min;
        long long r=x/10;
        long long t=x%10;
        
        if(t>0)
        {
            move=r+1;
        }
        else
        move=r;
 
        printf("%lld\n",move);
    }
    return 0;
}
