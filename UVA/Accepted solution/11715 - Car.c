#include<stdio.h>
#include<math.h>
int main()
{
    int c,i=1;
    double u,v,t,a,s;
    while(scanf("%d",&c)==1){
        if(c==0) break;
    if(c==1){
            scanf("%lf%lf%lf",&u,&v,&t);
            a=(v-u)/t;
            s=(v*v-u*u)/(2.0*a);
            printf("Case %d: %.3lf %.3lf\n",i++,s,a);

        }
       else if(c==2)
         {
             scanf("%lf%lf%lf",&u,&v,&a);
             t=(v-u)/a;
             s=(v*v-u*u)/(2.0*a);
             printf("Case %d: %.3lf %.3lf\n",i++,s,t);
         }
        else if(c==3)
         {
             scanf("%lf%lf%lf",&u,&a,&s);
             v=sqrt(u*u+2*a*s);
             t=(v-u)/a;
             printf("Case %d: %.3lf %.3lf\n",i++,v,t);
         }
        else
         {
            scanf("%lf%lf%lf",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i++,u,t);
         }
    }
    return 0;
}
