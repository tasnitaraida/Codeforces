#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
 
        int x=((3*n)/0.75);
        int b=x/2;
        printf("%d\n",b);
    }
    return 0;
}
