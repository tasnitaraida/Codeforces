#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
 
        int r=n%3;
        if (r>0)
        printf("%d\n",3-r);
        else
        printf("0\n");
    }
    return 0;
}
