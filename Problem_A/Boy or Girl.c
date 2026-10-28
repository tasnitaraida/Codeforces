#include<stdio.h>
int main(void)
{
    char c;
    char alpha[26]={0};
    int distinct=0;
 
    while((c=getchar())!='\n')
    {
        c=c-'a';
        alpha[c]++;
    }
 
    int i=0;
    int sum=0;
    for(i=0;i<26;i++)
    {
        if(alpha[i]>=1)
        sum+=1;
    }
 
 
    if(sum%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    printf("IGNORE HIM!");
 
    return 0;
}
