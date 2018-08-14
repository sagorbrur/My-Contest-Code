#include<stdio.h>
int main()
{
    int a,b,c,n,i,j,t,ans;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    scanf("%d%d%d%d",&a,&b,&c,&n);
    if(b-a==c-b)
    {
    ans=((b-a)*n);
    printf("Case %d: %d\n",i,ans);

    }
    else
        printf("Case %d: Error\n",i);
    }
    return 0;
}
