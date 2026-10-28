#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char p[7];
        scanf("%s",&p);
 
        if ((p[0]+p[1]+p[2])==(p[3]+p[4]+p[5]))
        printf("YES\n");
        else
        printf("No\n");
    }
    return 0;
}
