#include<stdio.h>

int main()
{
    int x1,x2,x3,mid,max,min,totalDistance;
    scanf("%d%d%d",&x1,&x2,&x3);
 
    if (x1>x2 && x1>x3) {       
        if(x2<x3)
            min=x2;
        else 
            min=x3;
    max=x1;
    }
    
    else if (x2>x1 && x2>x3) {
        if (x1>x3)
            min=x3;
        else 
            min=x1;
    max=x2;
    }
 
    else 
    {
        if (x2>x1)
            min=x1;
        else 
            min=x2;
    max=x3;
    }
 
    if (x2>x1 && x2<x3 || x2<x1 && x2>x3)
    mid=x2;
    else if (x1>x2 && x1<x3 || x1<x2 && x1>x3)
    mid=x1;
    else 
    mid=x3;
    
    totalDistance=(max-mid)+(mid-min);
 
    printf("%d",totalDistance);
}
