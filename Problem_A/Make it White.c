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
 
        char s[n];
        int count=0;
        int i=0;
        int color=0;
        scanf("%s",&s);
 
        for(i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
            color=i;
            break;
            }
        }
 
        int backC=0;
 
        int j=0;
        for(j=n-1;j>0;j--)
        {
            if(s[j]=='B')
            {
                backC=j;
                break;
            }
        }
       
        printf("%d\n",j-i+1);
    }
}
