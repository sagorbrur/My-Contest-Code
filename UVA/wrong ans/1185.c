#include<stdio.h>
int main()
{
    int n,k;
    long long int a,i,t,j,count;
    scanf("%d",&n);
    for(k=1;k<=n;k++){
        t=1;
        count=0;
    scanf("%lld",&a);
    for(i=a;i>=1;i--)
    t=t*i;
    while(t!=0)
    {
        t=t/10;
        count++;
    }
    printf("%lld\n",count);
    }
    return 0;
}
