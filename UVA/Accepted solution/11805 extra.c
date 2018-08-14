#include<stdio.h>
int main()
{
    int t,i,a,b,c,result;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
       result=b+c;
       while(result>a){
       result=result-a;
    }
    printf("Case %d: %d\n",i,result);
    }
    return 0;
}

