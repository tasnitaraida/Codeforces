#include<stdio.h>
 
int main()
{
    int n;
    scanf("%d",&n);
 
    int i=1;
    printf("I hate ");
 
    for(i=1;i<=n;i++)
    {
        if(i==n)
            printf("it");
        else if((i+1)%2==0)
            printf("that I love ");
        else
            printf("that I hate ");
    }
 
    return 0;
}
