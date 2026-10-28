#include<stdio.h>
#include<string.h>
 
int main()
{
    char n[100];
    scanf("%s",n);
    int i=0;
    int len=strlen(n);
 
    for(i=0;i<len;i++)
    {
        if(i==0 && n[i]=='9')
        printf("9");
 
        else if(n[i]>'4')
        {
            n[i]=9-(n[i]-'0');
            printf("%d",n[i]);
        }
        else
        printf("%c",n[i]);
    }
 
    return 0;
}
