#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,m;
        int hm;
        scanf("%d%d",&h,&m);
 
        int h2=24-h;
        hm=h2*60;
 
        if(h==0)
        {
            h2=24;
        }
        
        printf("%d\n",hm-m);
    }
    return 0;
}
