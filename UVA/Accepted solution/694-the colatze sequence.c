#include<stdio.h>
int main()
{
    long long int a,b,count,x=1,n;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(a<0&&b<0) break;
        count=0;
        n=a;
        while(a<=b)
        {
            count++;
            if(a==1) break;
            if(a%2==0)
                a=a/2;
            else
                a=3*a+1;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",x++,n,b,count);

    }
    return 0;

}
