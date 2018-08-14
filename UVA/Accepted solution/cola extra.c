#include<stdio.h>
int main()
{
    long int cola;
    while(scanf("%ld",&cola)==1)
    {
        if(cola==0) break;
        printf("%ld\n",cola>>1);
    }
    return 0;
}
