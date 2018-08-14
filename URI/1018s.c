#include<stdio.h>
int main()
{
    int n,o,f,t,ten,five,two,one;
    scanf("%d",&n);
    o=n/100;
    n=n%100;
    f=n/50;
    n=n%50;
    t=n/20;
    n=n%20;
    ten=n/10;
    n=n%10;
    five=n/5;
    n=n%5;
    two=n/2;
    one=n%2;
    printf("%d nota(s) de R$ 100,00\n",o);
    printf("%d nota(s) de R$ 50,00\n",f);
    printf("%d nota(s) de R$ 20,00\n",t);
    printf("%d nota(s) de R$ 10,00\n",ten);
    printf("%d nota(s) de R$ 5,00\n",five);
    printf("%d nota(s) de R$ 2,00\n",two);
    printf("%d nota(s) de R$ 1,00\n",one);
    return 0;
}
