#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,a,b,r;
    float l,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&r);
        s=r-sqrt(a*a+b*b);
        l=r+sqrt(a*a+b*b);
        printf("%.2f %.2f\n",s,l);
    }
    return 0;
}
