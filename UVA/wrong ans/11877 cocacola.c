#include<stdio.h>
int main()
{
    int n,i,k,rem,sum;
    for(i=1;i<=10;i++)
    {
        scanf("%d%d",&n,&k);
        if(n==0&&k==0) break;
        sum=0;
        while(n>=k)
        {

           rem=n%k;
            n=n/k+rem;
           sum=sum+n;
        }
        printf("%d\n",sum+n);

    }
    return 0;
}
