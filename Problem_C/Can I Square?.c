#include<stdio.h>
#include<math.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld\n",&n);
        long long i=0;
        long long sum=0;
        long long a[n];
        
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
 
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
 
        long long root=sqrt(sum);
 
        if(root*root==sum)
        {
            printf("YES\n");
        }
        else
        printf("NO\n");
    }
    return 0;
}
