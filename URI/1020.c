#include<stdio.h>
int main()
{
    int days,y,m,d;
    scanf("%d",&days);
    y=days/365;
    days=days%365;
    m=days/30;
    d=days%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}
