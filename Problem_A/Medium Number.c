#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
    int a,b,c,mid;
    scanf("%d%d%d",&a,&b,&c);
 
    if ((a>b && b>c)||(a<b && b<c))
    mid=b;
    else if ((a<b && a>c)||(a>b && a<c))
    mid=a;
    else 
    mid=c;
 
    printf("%d\n",mid);
    }
    return 0;
}
