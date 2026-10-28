#include<stdio.h>
int main(void)
{
    int a,b;
    int year=1;
    int count=0;
 
    scanf("%d%d",&a,&b);
 
    while(a<=b)
    {
        year++;
        a=3*a;
        b=2*b;
        count++;
    }
    printf("%d",count);
    return 0;
}
