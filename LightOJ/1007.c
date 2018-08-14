#include<stdio.h>
int main()
{
    int a,b,i,j,count=0,x;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<=(i-1);j++)
        if(i%j!=0)
        count++;

    }
    x=count*count;
    printf("%d\n",x);
    return 0;
}
