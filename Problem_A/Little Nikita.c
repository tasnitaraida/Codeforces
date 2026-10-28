#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m=0;
        scanf("%d%d",&n,&m);
 
        if(n>=m && (n%2==0 && m%2==0))
        printf("YES");
        else if(n>=m && (n%2!=0 && m%2!=0))
        printf("YES");
        else
        printf("NO");
 
        printf("\n");
    }
    return 0;
}
