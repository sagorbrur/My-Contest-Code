#include<stdio.h>
int main()
{
    int t;
    unsigned long long int n,i,sum;
    scanf("%d",&t);
    while(t--){
    scanf("%llu",&n);
    if(n<180000)
    printf("0\n");
    else if(n>180000&&n<=480000)
    printf("30000\n");
    else if(n>480000&&n<=880000)
    printf("90000\n");
    else if(n>880000&&n<=1180000)
    printf("150000\n");
    else
    {
        i=n-1180000;
        sum=(i/100)*25;
        printf("%llu\n",sum+150000);
    }
    }
    return 0;
}
