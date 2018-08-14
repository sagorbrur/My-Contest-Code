#include<stdio.h>
int main()
{
    int i,count=1;
    long long int a[100],sum,n;

    while(scanf("%lld",&n)==1){
        sum=1;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        sum=sum*a[i];
    }
    if(sum>0)
    printf("Case #%d: The maximum product is %d.\n\n",count++,sum);
    if(sum<=0)
    printf("Case #%d: The maximum product is 0.\n\n",count++);
    }
    return 0;
}
