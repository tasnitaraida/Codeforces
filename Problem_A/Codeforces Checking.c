#include<stdio.h>
 
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char c;
        int in=0;
        int i=0;
        char string[10]={'c','o','d','e','f','o','r','c','e','s'};
 
        scanf(" %c", &c);
 
        for(i=0;i<10;i++)
        {
            if(c==string[i])
            {
                in=1;
                break;
            }
        }
 
        if(in)
        printf("YES\n");
        else
        printf("NO\n");
 
    }
    return 0;
}
