 #include<stdio.h>
 int main()
 {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int d1=n/4;
        int r1=n%4;
        int d2=r1/2;
        printf("%d\n",d1+d2);
    }
    return 0;
 }
