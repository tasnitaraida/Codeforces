#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
    int l,r,d,u;
    scanf("%d%d%d%d",&l,&r,&d,&u);
 
    if (r==l && d==l && u==l)
    printf("Yes\n");
    else 
    printf("No\n");
    }
    return 0;
}
