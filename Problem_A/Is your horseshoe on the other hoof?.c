#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
 
    int count=0;
    if (a==b)
    count++;
    if (a==c)
    count++;
    if (a==d)
    count++;
    if (b==c)
    count++;
    if (b==d)
    count++;
    if (c==d)
    count++;
 
    if (count==0)
    printf("0");
    else if (count==1)
    printf("1");
    else if (count<=3)
    printf("2");
    else 
    printf("3");    
}
