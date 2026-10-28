#include<stdio.h>
#include<math.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        int a,b;
        int area;
        scanf("%d%d",&x1,&y1);
        scanf("%d%d",&x2,&y2);
        scanf("%d%d",&x3,&y3);
        scanf("%d%d",&x4,&y4);
 
        if(x1==x3 && x2==x4)
        {
            a=x4-x1;
            b=y3-y1;
        }
        else if(x1==x2 && x3==x4)
        {
            a=x1-x3;
            b=y2-y1;
        }
        else if(x1==x4 && x2==x3)
        {
            a=x3-x1;
            b=y4-y1;
        }
        else if(x2==x3 && x1==x4)
        {
            a=x4-x2;
            b=y3-y1;
        }
        else if(x2==x4 && x1==x3)
        {
            a=x3-x2;
            b=y4-y2;
        }
        else
        {
            a=x2-x3;
            b=y4-y1;
        }
 
        area=a*b;
 
        if(area<0)
        printf("%d\n",area/-1);
        else
        printf("%d\n",area);
    }
    return 0;
}
