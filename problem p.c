#include<stdio.h>
int main()
{
    int t,i,a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
        printf("Case %d: YES\n",i);
        else
        printf("Case %d: NO\n",i);
    }
    return 0;
}
