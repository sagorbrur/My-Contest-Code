#include<stdio.h>
int main()
{
    double a,b,c,T,Cr,Tp,S,R;
    scanf("%lf%lf%lf",&a,&b,&c);
    T=(a*c)/2;
    Cr=3.14159*c*c;
    Tp=(c/2)*(a+b);
    S=b*b;
    R=a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",T,Cr,Tp,S,R);

return 0;
}
