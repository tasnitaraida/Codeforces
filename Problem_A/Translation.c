#include<stdio.h>
#include<string.h>
 
int main(void)
{
    char word[1000],rev[1000];
    scanf("%s%s",&word,&rev);
 
    strrev(word);
    if(strcmp(word,rev)==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}
