#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
 
        int i=0;
        int max=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
 
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            max=a[i];
            else
            max=max;
        }
 
        printf("%d\n",max);
    }
}
