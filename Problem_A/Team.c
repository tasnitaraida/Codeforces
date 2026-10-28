#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n][3];
    int i=0,j=0;
    int count=0;
    int contest=0;
 
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
 
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
        }
        if(count>1)
        {
            contest=contest+1;
        }
    }
    printf("%d",contest);
    return 0;
}
