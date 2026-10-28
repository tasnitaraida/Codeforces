#include<stdio.h>
int main(void)
{
    int n,h;
    scanf("%d%d",&n,&h);
 
    int height[n];
    int i=0;
    int width=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&height[i]);
    }
 
    for(i=0;i<n;i++)
    {
        if(height[i]>h)
        {width+=2;}
        if(height[i]<=h)
        {width+=1;}
    }
     printf("%d",width);
 
    return 0;
}
