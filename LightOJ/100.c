#include<stdio.h>
int main()
{
    int T,i,a,b,sum;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
