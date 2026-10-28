#include<stdio.h>
#include<string.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
 
        int diff=0;
        int i=0;
        int s[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
        }
 
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i+1] && s[i]!=s[i-1])
            {
                diff=i;
                break;
            }
        }
 
        printf("%d\n",diff+1);
    }
    return 0;
}
