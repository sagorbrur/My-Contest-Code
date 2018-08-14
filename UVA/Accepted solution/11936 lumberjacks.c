#include<stdio.h>
int main()
{
    int t,i,a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c&&a+c>b&&b+c>a)
        printf("OK\n");
        else
        printf("Wrong!!\n");
    }
    return 0;
}
