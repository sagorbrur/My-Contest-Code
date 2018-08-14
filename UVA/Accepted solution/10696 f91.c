#include<stdio.h>
unsigned long f91(int N)
{
    if(N<=100)
    return  f91(f91(N+11));
    if(N>=101)
    return  N-10;
}
int main()
{
    unsigned long int n;
    while(scanf("%lu",&n)==1){
        if(n==0) break;
    printf("f91(%lu) = %lu\n",n,f91(n));
    }
    return 0;
}
