#include<stdio.h>
int main()
{
    int t,i;
    unsigned long long a,b,sum1,sum2,rem1,rem2,sum3,rem3,add;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%llu%llu",&a,&b);
        sum1=0;
        sum2=0;
        sum3=0;
        while(a!=0)
        {
            rem1=a%10;
            sum1=sum1*10+rem1;
            a=a/10;
        }
        while(b!=0)
        {
            rem2=b%10;
            sum2=sum2*10+rem2;
            b=b/10;
        }
        add=sum1+sum2;
        while(add!=0)
        {
            rem3=add%10;
            sum3=sum3*10+rem3;
            add=add/10;
        }
        printf("%llu\n",sum3);
    }
    return 0;
}
