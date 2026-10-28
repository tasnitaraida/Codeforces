#include<stdio.h>
#include<string.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[101];
        scanf("%s",&s);
        int i=0;
        int j=0;
        int copy=1;
        
        if((strlen(s))%2==0)
        {
            j=(strlen(s)/2);
            for(i=0,j=(strlen(s)/2);i<strlen(s) && j<strlen(s);i++,j++)
            {
                if(s[i]!=s[j])
                copy=0;
            }
 
            if(copy==0)
                printf("NO\n");
            else
                printf("YES\n");
        }
 
        else
        printf("NO\n");
    }
    return 0;
}
