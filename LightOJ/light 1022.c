#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
    int T,i;
    double r,d,n;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
    scanf("%lf",&r);
    d=r*2;
    n=((d*d)-(pi*r*r));
    printf("Case %d: %.2f\n",i,n);
    }
    return 0;
}
