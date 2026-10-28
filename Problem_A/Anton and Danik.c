#include<stdio.h>
int main(void)
{
    long long n;
    scanf("%lld",&n);
 
    getchar();
    char c;
    int win[4]={0};
 
    while((c=getchar())!='\n')
    {
        c=c-'A';
        win[c]++;
    }
 
    if(win[0]==win[3])
    {
        printf("Friendship");
    }
    else if(win[0]<win[3])
    {
        printf("Danik");
    }
    else
    {
        printf("Anton");
    }
    return 0;
}
