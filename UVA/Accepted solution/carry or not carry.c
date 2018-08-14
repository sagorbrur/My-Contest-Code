#include<stdio.h>
int main()
{
    unsigned long int a,b,x;
    while(scanf("%lu%lu",&a,&b)!=EOF){
    x=(a^b);
    printf("%lu\n",x);
    }
    return 0;
}
