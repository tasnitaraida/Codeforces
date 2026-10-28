#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
 
    int sum=0;
    char word[4];
    while(n--)
    {
        char word[4];
        scanf("%s",word);
 
        if(word[0]=='+' || word[2]=='+')
        {
            sum++;
        }
        else if(word[0]=='-' || word[2]=='-')
        {
            sum--;
        }
        else
        sum=sum;
    }
 
    printf("%d",sum);
}
