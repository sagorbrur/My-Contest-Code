#include<stdio.h>
int main()
{
    int t,i,a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a>b&&b>c)||(b>a&&b<c))
        printf("Case %d: %d\n",i,b);
        else if((a>c&&c>b)||(c>a&&c<b))
        printf("Case %d: %d\n",i,c);
        else
        printf("Case %d: %d\n",i,a);
    }
    return 0;
}
