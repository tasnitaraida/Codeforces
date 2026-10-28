#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    
    int count=0;
    while(n--)
    {
        int p,q;
        scanf("%d%d",&p,&q);
 
        if(p<=q-2)
        {
            count++;
        }
    }
    printf("%d",count);
 
    return 0;
}
