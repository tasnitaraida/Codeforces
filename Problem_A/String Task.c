#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main() {
    char s[101];
    
    scanf("%s",s);
    int len=strlen(s);
 
    int i=0;
 
     /*
    for(i=0;i<len;i++) {
        if((toupper(s[i]))!='A'&&(toupper(s[i]))!='E'&&(toupper(s[i]))!='I'&&(toupper(s[i]))!='O'&&(toupper(s[i]))!='U')
        {
            printf("."); 
            printf("%c",tolower(s[i]));
        }
    }
    */
 
    
    while(i<len)
    {
        if((toupper(s[i]))!='A'&&(toupper(s[i]))!='E'&&(toupper(s[i]))!='I'&&(toupper(s[i]))!='O'&&(toupper(s[i]))!='U'&&(toupper(s[i]))!='Y')
        {
            printf(".");
            printf("%c",tolower(s[i]));
        }
        
        i++;
    }
    
    return 0;
}
