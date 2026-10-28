#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
 
        int d=n/2;
        int r=n%2;
        if (r==0)
        printf("%d\n",d-1);
        else
        printf("%d\n",d);
 
    }
    return 0;
}
