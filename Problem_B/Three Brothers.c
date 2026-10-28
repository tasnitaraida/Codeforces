#include<stdio.h>
int main(void)
{
    int big=1,mid=2,lil=3;
    int a,b;
 
    scanf("%d%d",&a,&b);
 
    if((a==1 && b==2)||(a==2 && b==1))
    printf("%d",lil);
    else if((a==2 && b==3)||(a==3 && b==2))
    printf("%d",big);
    else
    printf("%d",mid);
 
    return 0;
}
