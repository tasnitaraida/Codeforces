#include<stdio.h>
int main(void)
{
    int n,a,b;
    int way;
    scanf("%d%d%d",&n,&a,&b);
 
    if((a+b)>=n)
    {
        way=n-a;
    }
    else
    {
    way=b+1;
    }
    printf("%d",way);
    return 0;
}
