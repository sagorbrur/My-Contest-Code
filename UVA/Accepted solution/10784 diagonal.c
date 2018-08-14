#include<stdio.h>
#include<math.h>
int main()
{
    int i=1;
   double d,n;
   while(scanf("%lf",&d)==1)
   {
       if(d==0) break;
       n=ceil((3+sqrt(9+8*d))/2);
       printf("Case %d: %.0lf\n",i++,n);
   }
   return 0;
}
