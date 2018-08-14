#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
    double r,n,area;
    while(scanf("%lf %lf",&r,&n)==2){
    area=(r*r*n*sin(2*pi/n))/2;
    printf("%.3lf\n",area);
    }
    return 0;
}
