#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
 
    int mishWin=0;
    int chrisWin=0;
    
    while(n--)
    {
        int m,c;
        scanf("%d%d",&m,&c);
 
        if(m>c)
        mishWin+=1;
        else if(c>m)
        chrisWin+=1;
        else
        {
            mishWin=mishWin;
            chrisWin=chrisWin;
        }
    }
 
    if(mishWin>chrisWin)
    printf("Mishka");
    else if(mishWin<chrisWin)
    printf("Chris");
    else
    printf("Friendship is magic!^^");
 
    return 0;
}
