#include<stdio.h>
int main()
{
    int T,B,H,Y,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&B,&H);
        Y=(((B*H)/2)*2);
        printf("Case %d: %d\n",i,Y);
    }
    return 0;
}
