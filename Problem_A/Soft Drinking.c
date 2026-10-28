#include<stdio.h>
int main(void)
{
    int n,k,l,c,d,p,nl,np;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
 
    int drink=(k*l)/n;
    int lime=(c*d)/n;
    int salt=(p/n);
 
    int drinkMake=drink/nl;
    int limeMake=lime/1;
    int saltMake=salt/np;
 
    int min=limeMake;
 
    if(drinkMake<min)
    min=drinkMake;
    if(saltMake<min)
    min=saltMake;
 
    printf("%d",min);
    return 0;
}
