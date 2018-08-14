#include<stdio.h>
#include<string.h>
#include<math.h>

int N,I;
double P;

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%lf%d",&N,&P,&I);
        if(fabs(P)<1e-9)
            printf("0.0000\n");
        else
            printf("%.4lf\n",P*pow(1-P,I-1)/(1-P,N));


    }
    return 0;
}
