#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
 
while (t--)
{
    int n;
    scanf("%d",&n);
 
    int d=n/10;
    int r=n%10;
    int a=d+r;
 
    printf("%d\n",a);
}
return 0;
}
