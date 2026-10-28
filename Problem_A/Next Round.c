#include<stdio.h>
int main(void)
{
    int n,k;
    scanf("%d%d",&n,&k);
 
    int a[100];
    int i=0;
    int count=0;
 
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]!=0)
        {
            count++;
        }
    }
 
    printf("%d",count);
    return 0;
}
