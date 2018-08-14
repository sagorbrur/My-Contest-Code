/*accepted*/
#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    int T,i;
    double L,w,r,r_area,c_area,green_area;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lf",&L);
          w=(L*6)/10;
          r=(L*2)/10;
          r_area=(L*w);
          c_area=(pi*r*r);
        green_area=(r_area-c_area);
        printf("%.2lf %.2lf\n",c_area,green_area);
    }
    return 0;
}
