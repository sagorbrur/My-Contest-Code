//accepted
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,count;
    float f;
    while(scanf("%d %d",&a,&b)!=EOF){
        count=0;
        if(a==0&&b==0) break;
    for(i=a;i<=b;i++)
    {
        f=sqrt(i);
        if((f-(int)f)==0)
        count++;
    }
    printf("%d\n",count);
    }
    return 0;
}
