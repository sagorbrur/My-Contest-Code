#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    signed int ps,sum;
    while(scanf("%d",&n)==1){
        if(n==0) break;
        sum=0;
    ps=(pow(2,n-1)*(pow(2,n)-1));
    for(i=1;i<ps;i++)
    {
        if(ps%i==0)
        sum=sum+i;
    }
    if(ps==sum)
    printf("Perfect: %d!\n",ps);
    else
    printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}
