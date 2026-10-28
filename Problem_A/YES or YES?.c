#include<stdio.h>
#include<ctype.h>
 
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--) 
    {
        char s[4];
        int i=0;
 
        scanf("%s",s);
        int yes=1;
 
        if((toupper(s[0]))=='Y' && (toupper(s[1]))=='E' && (toupper(s[2]))=='S') {
            printf("YES\n");
        }
        else
            printf("NO\n");
 
    }
}
