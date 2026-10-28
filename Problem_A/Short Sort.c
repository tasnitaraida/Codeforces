#include<stdio.h>
#include<string.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[4][4]={"abc","acb","cba","bac"};
        
        char s0[4];
        scanf("%s",s0);
 
        if((strcmp(s0,s[0])==0) || (strcmp(s0,s[1])==0) || (strcmp(s0,s[2])==0) || (strcmp(s0,s[3])==0))
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
