#include<stdio.h>
int main()
{
  int a,b,d,e;
  float c,f,x,y;
  scanf("%d%d%f",&a,&b,&c);
  scanf("%d%d%f",&d,&e,&f);
  x=b*c;
  y=e*f;
  printf("VALOR A PAGAR: R$ %.2f",x+y);
  return 0;
}
