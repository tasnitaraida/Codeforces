#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
 
    int d1= n/100;
    int r1=n%100;
    int d2=r1/20;
    int r2=r1%20;
    int d3=r2/10;
    int r3=r2%10;
    int d4=r3/5;
    int r4=r3%5;
    int d5=r4/1;
    int r5=r4%1;
 
    int s=d1+d2+d3+d4+d5;
    printf("%d",s);
    return 0;
}
