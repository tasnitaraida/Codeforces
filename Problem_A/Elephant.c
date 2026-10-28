#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    
    int d1=x/5;
    int r1=x%5;
    int d2=r1/4;
    int r2=r1%4;
    int d3=r2/3;
    int r3=r2%3;
    int d4=r3/2;
    int r4=r3%2;
    int d5=r4/1;
    int r5=r4%1;
 
    int s=d1+d2+d3+d4+d5;
    printf("%d",s);
 
   
}
