#include<stdio.h>
int main()
{
    int t,i,a,b,c,result;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        result=c*(a+(a-b))/(a+b);
        printf("%d\n",result);
    }
    return 0;
}
