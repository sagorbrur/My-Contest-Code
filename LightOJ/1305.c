//accepted
#include<stdio.h>
#include<math.h>
int main()
{
    int T,i,x1,x2,x3,x4,y1,y2,y3,y4,q,area;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    x4=x1+x3-x2;
    y4=y1+y3-y2;
    q=((x1*y2)+(x2*y3)+(x3*y4)+(x4*y1))-((y1*x2)+(y2*x3)+(y3*x4)+(y4*x1));
    if(q<0)
    q*=-1;
    area=0.5*q;
    printf("Case %d: %d %d %d\n",i,x4,y4,area);
    }
    return 0;
}
