#include<stdio.h>
int main(void)
 
{
    int n;
    scanf("%d",&n);
 
    getchar();
 
    int i=0;
    int easy=0;
    int hard=0;
    int s[200];
    char c;
    
    while((c=getchar())!='\n')
    {
        s[i++]=c;
    }
 
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='1')
        {
            hard+=1;
        }
        else
            easy+=1;
    }
    
    if(hard>0)
    printf("HARD");
    else
    printf("eAsY");
 
    return 0;
}
