//problem name ternary accepted.

#include<stdio.h>
int main()
{
    long long int n,rem,i,j,ternary;
    while(scanf("%lld",&n)==1){
        if(n<0) break;
    i=1;
    ternary=0;
    while(n!=0)
    {

        rem=n%3;
        n=n/3;
        ternary=ternary+rem*i;
        i=i*10;
    }
     printf("%lld\n",ternary);
    }
    return 0;
}
