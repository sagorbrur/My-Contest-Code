#include<stdio.h>
int main()
{
    unsigned long long int n,sum1,sum2,sum3,remain1,remain2,remain3;
    while(scanf("%llu",&n)==1)
    {
        sum1=0;
        sum2=0;
        sum3=0;
        if(n==0) break;
        while(n!=0)
        {
            remain1=n%10;
            sum1=sum1+remain1;
            n=n/10;
        }
        while(sum1!=0)
        {
            remain2=sum1%10;
            sum2=sum2+remain2;
            sum1=sum1/10;
        }
        while(sum2!=0)
        {
            remain3=sum2%10;
            sum3=sum3+remain3;
            sum2=sum2/10;
        }
        printf("%llu\n",sum3);
    }
    return 0;
}
