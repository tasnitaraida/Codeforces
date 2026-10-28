#include<stdio.h>
int main(void)
{
    int n;
    int i=0;
    int c;
    int luckynumber=0;
    scanf("%d",&n);
 
    int lucky[14]={4,7,44,77,47,74,444,777,474,747,774,477,744,447};
 
    for(i=0;i<14;i++)
    {
        if(n==lucky[i] || n%lucky[i]==0)
        {
        luckynumber=1;
        }
    }
 
    if(luckynumber==1)
    printf("YES");
    else
    printf("NO");
 
    return 0;
}
