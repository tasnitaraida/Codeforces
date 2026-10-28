#include<stdio.h>

int main()
{
    int k,n,w,total;
    scanf("%d%d%d",&k,&n,&w);
    
    total=w*(k*w+k)/2;
    if (n>=total)
    printf("0");
    else
    printf("%d",total-n);
return 0;
}
