#include<stdio.h>
int main()
{
    long long int N,F,v[100],i,sum=0,bill;
    scanf("%lld%lld",&N,&F);
    for(i=0;i<N;i++)
    {
        scanf("%lld",&v[i]);
        sum=sum+v[i];
    }
    bill=sum/F;
    printf("costs %lld: each friend should pay %lld\n",sum,bill);
    return 0;
}
