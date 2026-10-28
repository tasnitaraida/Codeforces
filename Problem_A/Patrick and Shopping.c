#include<stdio.h>
int main()
{
    long long d1,d2,d3;
    scanf("%lld%lld%lld",&d1,&d2,&d3);
 
    long long w[5];
    w[0]=d1*2+d2*2;
    w[1]=d1+d2+d3;
    w[2]=d1*2+d3*2;
    w[3]=d2*2+d3*2;
 
    long long min=9999999999;
    for(int i=0;i<4;i++)
    {
        if(w[i]<min)
        min=w[i];
    }
    printf("%lld",min);
 
}
