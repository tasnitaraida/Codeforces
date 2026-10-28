#include<stdio.h>
int main(void)
{
    char a[101],b[101];
    scanf("%s%s",a,b);
 
    int i=0;
    for(i=0;a[i]!='\0',b[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
 
    return 0;
}
