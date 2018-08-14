#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,i,sum;
    while(scanf("%d%d",&n,&a)==2){
        sum=0;
    for(i=1;i<=n;i++)
    {
       sum=sum+i*pow(a,i);
    }
    printf("%d\n",sum);
    }
    return 0;
}
