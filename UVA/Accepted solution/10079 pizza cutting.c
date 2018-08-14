#include<stdio.h>
int main()
{
    long long int n,result;
    while(scanf("%lld",&n)==1)
    {
        if(n<0) break;

        result=(n*(n+1)/2)+1;
        printf("%lld\n",result);

    }
    return 0;
}
