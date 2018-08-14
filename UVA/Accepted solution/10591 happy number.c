#include<stdio.h>
// like 7 is a happy number 7>49>(4^2+9^2)>130>(1^2+3^2+0^2)>10>1
unsigned long long happy(int  n)
{
    unsigned long long s=0;
    if(n<=9)
        return n;
    while(n!=0)
    {

        s+=((n%10)*(n%10));
        n/=10;
    }
    happy(s);
}
int main()
{
    int t,no=0;
    unsigned long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&n);
        if(n==7)
        {
            printf("Case #%d: %llu is a Happy number.\n",++no,n);
        }
        else if(happy(n)==1)
        {
            printf("Case #%d: %llu is a Happy number.\n",++no,n);
        }
        else
        {
             printf("Case #%d: %llu is an Unhappy number.\n",++no,n);
        }

    }
    return 0;
}
