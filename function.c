#include<stdio.h>
int main()
{
    long long int n,i,j,sum1=0,sum2=0,ans;
     scanf("%lld",&n);
    for(i=1;i<=n;i=i+2)
        sum1=sum1+i;
    for(j=2;j<=n;j=j+2)
    sum2=sum2+j;
    ans=sum2-sum1;
    printf("%lld\n",ans);
    return 0;
}
