#include<stdio.h>
int main()
{
    unsigned long long int n,m,i,fact=1;
    scanf("%llu%llu",&n,&m);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    if(fact%m==0)
    printf("%llu divides %llu!\n",m,n);
    else
    printf("%llu does not divide %llu!\n",m,n);
    return 0;
}
