#include<stdio.h>
int main()
{
    int T,i,j,N,k,sum=0;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        printf("\n");
        scanf("%d",&N);
        sum=0;
        for(j=1;j<=N;j++){
            scanf("%d",&k);
            sum+=k;
        }
        printf("case %d: %d\n",i,sum);
    }
    return 0;
}

