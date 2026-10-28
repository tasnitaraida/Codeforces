#include<stdio.h>
int main(void)
{
    char c;
    int res[6]={0};
 
    while((c=getchar())!='\n')
    {
        c=c-'0';
        res[c]++;
    }
 
    int i=1;
    
    for(i=1;i<6;i++)
    {
        if(res[i]<1)
        printf("%d",i);
    }
 
    return 0;
}
