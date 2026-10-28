#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
 
    while (t--)
    {
        int n;
        scanf("%d",&n);
 
        int d;
 
        if(n%2==0)
        printf("%d\n",(n/4)+1);
        else
        printf("0\n");
    }
    return 0;
}
