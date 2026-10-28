#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
 
    
    if(a==b && c==b && d==b)
    printf("Yes\n");
    else
    printf("No\n");
 
}
}
